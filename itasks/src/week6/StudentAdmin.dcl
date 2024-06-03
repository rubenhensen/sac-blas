definition module StudentAdmin
import iTasks

:: Student
 = { name :: String          // we put no restrictions on names
   , snum :: StudNumber      // must be formatted as one s followed by 4 digit chars (isDigit in StdChar is useful)
   , regs :: [Registration]  // all known registrations by this student
   }
:: StudNumber
 :== String
:: Registration
 :== (Year,BaMa)
:: Year
 :== Int
:: BaMa = Ba | Ma

instance ==       BaMa
instance toString BaMa
instance ==       Student

derive class iTask Student, BaMa  // unlocks the iTask machinery for these new data types

/**
* students is a sample student population that contains some incorrect entries
* @result the sample student population
*/
students :: [Student]

/**
* retrieve the `name` member
*
* @param student
* @result the name of student
*/ 
name :: Student -> String

/**
* retrieve the `regs` member
*
* @param student
* @result the registrations of student
*/ 
regs :: Student -> [Registration]

/**
* retrieve the `snum` member
*
* @param student
* @result the student number of student
*/ 
snum :: Student -> StudNumber

/**
* retrieve the registered study years of the students, without duplicates, and sorted
*
* @param students
* @result the sorted list of registered study years, without duplicates
*/ 
years :: [Student] -> [Year]

/**
* retrieve the program, if any, of a given student in a particular study year
*
* @param the year
* @param the student
* @result if the student studied in the given year, the corresponding programme, and `?None` otherwise
*/ 
program :: Year Student -> ? BaMa

/**
* retrieve all students who studied in the same year and programme as the given student
*
* @param the year
* @param the student
* @param the list of students to select from
@ @result the list of students who studied in the same year and programme as the student
*/
same_study :: Year Student [Student] -> [Student]

/**
* the argument is formatted correctly as a student number (starts with 's' and has exactly four digits)
*/
valid_snum :: StudNumber -> Bool
valid_student :: Student -> Bool

/** 
* replace the occurrence of the old student with the new student in the list of students
*
* @param the old student
* @param the new student
* @param the list of students, containing the old student
* @result the list of students in which the old student is replaced with the new student
*/
replace_student :: Student Student [Student] -> [Student]
duplicate_students :: [Student] -> [Student]
