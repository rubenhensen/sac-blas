implementation module StudentAdmin
import StdEnv
import iTasks
from Data.List import lookup
from Text.Unicode.UChar import isNumber, :: UChar
from utilities import stringToCharList
from Data.Func import $
import Data.GenLexOrd
import Data.GenEq

derive class iTask Student, BaMa  // unlocks the iTask machinery for these new data types

instance ==       BaMa where (==) p1 p2 = gEq{|*|} p1 p2
instance toString BaMa where toString p = hd (gText{|*|} AsSingleLine (?Just p))
instance ==       Student where (==) s1 s2 = (name s1,snum s1) == (name s2,snum s2)


students :: [Student]
students =
	[{name = "Alice"
	 ,snum = "s1000"   // this student number is deliberately equal to Dave and Frank's student number
	 ,regs = [(2018,Ba),(2019,Ba),(2020,Ba),(2021,Ma)]
	 }
	,{name = "Bob"
	 ,snum = "s1003"
	 ,regs = [(2018,Ba),(2019,Ba),(2020,Ba),(2021,Ma)]
	 }
	,{name = "Carol"
	 ,snum = "s1024"
	 ,regs = [(2017,Ba),(2018,Ba),(2019,Ba),(2020,Ma),(2021,Ma)]
	 }
	,{name = "Dave"
	 ,snum = "s1000"   // this student number is deliberately equal to Alice and Frank's student number
	 ,regs = [(2017,Ba),(2019,Ba),(2020,Ba),(2021,Ba)]
	 }
	,{name = "Eve"
	 ,snum = "s4096"
	 ,regs = [(2016,Ba),(2017,Ba),(2018,Ba),(2019,Ba),(2020,Ma),(2021,Ma)]
	 }
	,{name = "Frank"
	 ,snum = "s1000"   // this student number is deliberately equal to Alice and Dave's student number
	 ,regs = [(2017,Ba),(2018,Ba),(2019,Ba),(2020,Ma),(2021,Ma)]
	 }
	]

name :: Student -> String
name student = student.Student.name

regs :: Student -> [Registration]
regs student = student.Student.regs

snum :: Student -> StudNumber
snum student = student.Student.snum

years :: [Student] -> [Year]
years students = sort o removeDup o (map fst) o flatten o (map regs) $ students

program :: Year Student -> ? BaMa
program year student = lookup year (regs student)

same_study :: Year Student [Student] -> [Student]
same_study year student students = case program year student of
		?Just x = filter (\s -> isMember (year,x) s.regs) students
		?None = []

// same_study :: Year Student [Student] -> [Student]
// same_study year student students = filter (\s -> isAnyMember student.regs s.regs) students

valid_snum :: StudNumber -> Bool
valid_snum snum = case fromString snum of
	['s':xs]  = valid_snum` xs
	['S':xs]  = valid_snum` xs
	_		  = False

valid_snum` :: [Char] -> Bool
valid_snum` [] = False
valid_snum` [x] = isDigit x
valid_snum` [x:xs] = if (isDigit x) (valid_snum` xs) False

valid_student :: Student -> Bool
valid_student student = valid_snum student.Student.snum

replace_student :: Student Student [Student] -> [Student]
replace_student old new [s:xs] = if (s == old) [new:xs] ([s:(replace_student old new xs)])

duplicate_students :: [Student] -> [Student]
duplicate_students students = [s1 \\ s1 <- students, s2 <- students | snum s1 == snum s2 && s1 <> s2]