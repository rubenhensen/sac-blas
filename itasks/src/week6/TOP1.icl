module TOP1

import StdArray  // needed in case you wish to use an array comprehension, e.g. [c \\ c <-: str]
import iTasks
import StudentAdmin

/*	Peter Achten, P.Achten@cs.ru.nl
	Advanced Programming assignment Task Oriented Programming 1.
*/

Start w = doTasks (fix students) w

myTask :: Task Int
myTask = enterInformation []

enter_student :: Task Student
enter_student = enterInformation []

enter_students :: Task [Student]
enter_students = enterInformation []

update_student :: Student -> Task Student
update_student student = updateInformation [UpdateAs (\s -> s) (\old updated -> updated )] student

select_student :: [Student] -> Task Student
select_student students = enterChoice [] students

select_student_by_name :: [Student] -> Task Student
select_student_by_name students = enterChoice [ChooseFromDropdown (\s ->  name s)] students

select_year_sorted :: [Student] -> Task Year
select_year_sorted students = enterChoice [] (years students)

select_same_study :: Year Student [Student] -> Task [Student]
select_same_study year student students = case same_study year student students of
		[] = viewInformation [] [] <<@ Title "Student did not study this year."
		l = case (filter (\s -> s <> student) l) of
				[] = viewInformation [] [] <<@ Title "Nobody studied in the same year."
				k = enterMultipleChoice [ChooseFromDropdown (\s ->  name s)] k >>? \st ->  viewInformation [] st

select_same_study_from_population :: [Student] -> Task [Student]
select_same_study_from_population students = select_student_by_name students -&&- select_year_sorted students >>? \(student,year) ->
												select_same_study year student students

update_studentnumber :: Student -> Task Student
update_studentnumber student = viewInformation [] student  ||- 
								updateInformation [UpdateAs (\s -> s.Student.snum) (\old updated -> {student & snum = updated})] student >>*
								[OnAction ActionOk (ifValue valid_student return)] >>- \newStudent ->
								viewInformation [] newStudent

fix :: [Student] -> Task [Student]
fix students = case duplicate_students students of
	[] = viewInformation [] students
	[oldStudent:xs]= update_studentnumber oldStudent >>? \newStudent ->
		fix (replace_student oldStudent newStudent students)
