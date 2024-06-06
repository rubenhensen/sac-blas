implementation module Job
import iTasks
import iTasks.Extensions.DateTime

:: Job
 = { whatToDo :: String      // description of the job
   , deadline :: ?DateTime   // (?Just deadline) in case of a deadline, otherwise it must be done eventually
   , who      :: [UserId]    // candidate workers who can sign in to do this job
   }
derive class iTask Job

checkdeadline :: DateTime [Job] -> [Job]
checkdeadline deadline jobs = filter (\job -> case job.Job.deadline of
                                        ?None = True
                                        ?Just x = x < deadline) jobs


passeddeadline :: DateTime [Job] -> [Job]
passeddeadline deadline jobs = filter (\job -> case job.Job.deadline of
                                        ?None = False
                                        ?Just x = x > deadline) jobs

