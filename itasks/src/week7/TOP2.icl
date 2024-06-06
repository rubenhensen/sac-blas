module TOP2
import iTasks
import Text.HTML  // to fiddle with login and welcome messages
import Job

openJobsSDS :: SimpleSDSLens [Job]
openJobsSDS = sharedStore "openjobs" []

doneJobsSDS :: SimpleSDSLens [(UserId,Job)]
doneJobsSDS = sharedStore "donejobs" []

neglectedJobsSDS :: SimpleSDSLens [Job]
neglectedJobsSDS = sharedStore "neglectedjobs" []

Start :: *World -> *World
Start world
 = doTasks
     { WorkflowCollection
     | name           = "My beautiful app"
     , workflows      = [ workflow "Manage users" "manage users"                    manageUsers
                        , workflow "View members" "view current group member"       viewMembers
                        , workflow "View open jobs" "view all open jobs"            viewAllJobs
                        , workflow "View done jobs" "view all done jobs"            viewDoneJobs
                        , workflow "View neglected jobs" "view all neglected jobs"  viewNeglectedJobs
                        , workflow "View my jobs" "view my jobs"                    viewMyJobs
                        , workflow "Create new job" "create new job"                createJob
                        , workflow "Do a job" "do a job"                            doAJob
                        , workflow "Clean jobs" "clean jobs"                        cleanJobs
                        ]
     , loginMessage   = ?Just loginMessage
     , welcomeMessage = ?None
     , allowGuests    = False // this application does not make sense for anonymous users
     } world
where
//  example login message
	loginMessage = DivTag []
		[Text "Log in as a demo user for example 'alice' (password alice)"]

viewMembers :: Task [User]
viewMembers
 = viewSharedInformation [] users

viewAllJobs :: Task [Job]
viewAllJobs
 = viewSharedInformation [] openJobsSDS

viewDoneJobs :: Task [(UserId,Job)]
viewDoneJobs
 = viewSharedInformation [] doneJobsSDS

// viewDoneJobs :: Task [Job]
// viewDoneJobs
//  = viewSharedInformation [] doneJobsSDS @ (map snd)

viewNeglectedJobs :: Task [Job]
viewNeglectedJobs
 = viewSharedInformation [] neglectedJobsSDS

viewMyJobs :: Task [Job]
viewMyJobs
 = get currentUser >>-
 \(AuthenticatedUser id role displayname) -> 
 viewSharedInformation [ViewAs (\jobs -> filter (\job -> isMember id job.Job.who) jobs)] openJobsSDS

enter_description :: Task String
enter_description = enterInformation []

enter_deadline :: Task (?DateTime)
enter_deadline = enterInformation []

createJob :: Task [Job]
createJob
 = enterChoiceWithShared [ChooseFromCheckGroup id] users
    <<@ Title "Select a worker to delegate task to"
    >>? \(AuthenticatedUser id role name) -> enter_description
    <<@ Title "Give a job description"
    >>? \description -> enter_deadline
    <<@ Title "Set a deadline (optional)"
    >>? \deadline -> (upd (\jobs -> [({whatToDo = description, deadline = deadline, who = [id]}):jobs]) openJobsSDS)

doAJob
 = get currentDateTime
    >>- \ct -> get openJobsSDS
    >>- \jobs -> enterChoice [] (checkdeadline ct jobs)
    >>? \chosenjob -> get currentUser
    >>- \(AuthenticatedUser uid role name) -> upd (\(ojs, djs) -> (removeMember chosenjob ojs, [(uid, chosenjob):djs])) (openJobsSDS >*< doneJobsSDS)

instance == Job where (==) p1 p2 = gEq{|*|} p1 p2

cleanJobs
 = get currentDateTime
    >>- \ct ->get openJobsSDS
    >>- \jobs -> return (passeddeadline ct jobs)
    >>- \passedjobs -> upd (\(ojs, njs) -> (removeMembers ojs passedjobs, passedjobs ++ njs)) (openJobsSDS >*< neglectedJobsSDS)



// 2024-06-04 12:00:00
// 2024-06-03 12:00:00