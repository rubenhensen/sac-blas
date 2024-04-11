module LetExpr

import StdEnv, Q, Data.List

// Start = [toString (E i) \\ i <- [1..7]]
// Start = [free (E i) \\ i <- [1..7]]
// Start = [toString (remove_unused_lets (E i)) \\ i <- [1..7]]
// Start = [cyclic (E i) \\ i <- [1..7]]
// Start = toString ( (E 2) <@ ("x",NUM (toQ 42)) )
// Start = toString ( (E 3) <@ ("x",NUM (toQ 1)) )
// Start = toString ( (E 7) <@ ("x",NUM (toQ (4,3))) )
Start = [toString (eval (E i)) \\ i <- [1..7]]

E 1 = LET "x" (NUM (toQ 42) -. NUM (toQ 3)) (VAR "x" /. zero) +. LET "y" (NUM (toQ 6)) (VAR "y" *. VAR "y")  // syntactic correct expression with run-time error
E 2 = LET "x" (NUM (toQ 42)) (VAR "x" +. LET "x" (NUM (toQ 58)) (VAR "x"))                                   // syntactic correct expression with result 100
E 3 = LET "x" one (LET "y" (NUM (toQ 2)) (LET "x" (NUM (toQ 3)) (NUM (toQ 4))))                              // syntactic correct expression with result 4
E 4 = LET "x" one (VAR "x" +. (VAR "y"))                                                                     // syntactic incorrect expression (y not bound by let)
E 5 = (LET "x" one (VAR "x")) *. VAR "x"                                                                     // syntactic incorrect expression (outer x not bound by let)
E 6 = LET "x" (VAR "x") (NUM (toQ 42))                                                                       // syntactic incorrect expression (cyclic let definition)
E 7 = LET "x" (NUM (toQ (4,3))) (LET "y" (NUM (toQ (3,4))) (VAR "x" *. VAR "y"))                             // syntactic correct expression with result 1

:: LetExpr = NUM Q
          | VAR Name
          | (+.) infixr 6 LetExpr LetExpr
          | (-.) infixr 6 LetExpr LetExpr
          | (*.) infixr 7 LetExpr LetExpr
          | (/.) infixr 7 LetExpr LetExpr
          | LET Name LetExpr LetExpr
:: Name :== String

instance toString LetExpr
    where toString (NUM n) = toString n
          toString (VAR v) = v
          toString (x1 +. x2) = "(" +++ toString x1 +++ " + " +++ toString x2 +++ ")"
          toString (x1 -. x2) = "(" +++ toString x1 +++ " - " +++ toString x2 +++ ")"
          toString (x1 *. x2) = "(" +++ toString x1 +++ " * " +++ toString x2 +++ ")"
          toString (x1 /. x2) = "(" +++ toString x1 +++ " / " +++ toString x2 +++ ")"
          toString (LET v x1 x2) = "(" +++"let " +++ v +++ " = " +++ toString x1 +++ " in " +++ toString x2 +++ ")"

instance zero LetExpr
    where zero = NUM zero

instance one LetExpr
    where one = NUM one

instance == LetExpr
    where (==) x y = toString x == toString y

instance toString (?a) | toString a
    where   toString (?None) = "?None" 
            toString (?Just a) = "?Just " +++ toString a

free :: LetExpr -> [Name]
free expr = free2 expr []

free2 :: LetExpr [Name] -> [Name]
free2 (NUM n)       bound  = []
free2 (VAR v)       bound  = if (isMember v bound) [] [v]
free2 (x1 +. x2)    bound  = free2 x1 bound  +++ free2 x2 bound
free2 (x1 -. x2)    bound  = free2 x1 bound  +++ free2 x2 bound
free2 (x1 *. x2)    bound  = free2 x1 bound  +++ free2 x2 bound
free2 (x1 /. x2)    bound  = free2 x1 bound  +++ free2 x2 bound
free2 (LET v x1 x2) bound  = free2 x1 [v:bound] +++ free2 x2 [v:bound]

remove_unused_lets :: LetExpr -> LetExpr
remove_unused_lets (LET v x1 x2) = if (isMember v (free x2))
                                    (LET v (remove_unused_lets x1) (remove_unused_lets x2))
                                    (remove_unused_lets x2)
remove_unused_lets (x1 +. x2)   = remove_unused_lets x1 +. remove_unused_lets x2
remove_unused_lets (x1 -. x2)   = remove_unused_lets x1 -. remove_unused_lets x2
remove_unused_lets (x1 *. x2)   = remove_unused_lets x1 *. remove_unused_lets x2
remove_unused_lets (x1 /. x2)   = remove_unused_lets x1 /. remove_unused_lets x2
remove_unused_lets expr = expr

cyclic :: LetExpr -> Bool
cyclic (LET v x1 x2) = if (isMember v (free x1))
                        True
                        (cyclic x1 || cyclic x2)
cyclic (x1 +. x2)   = cyclic x1 || cyclic x2
cyclic (x1 -. x2)   = cyclic x1 || cyclic x2
cyclic (x1 *. x2)   = cyclic x1 || cyclic x2
cyclic (x1 /. x2)   = cyclic x1 || cyclic x2
cyclic expr = False


(<@) infixr 4 :: LetExpr (Name,LetExpr) -> LetExpr
(<@) expr sub = <<@ expr sub []

<<@ :: LetExpr (Name,LetExpr) [Name] -> LetExpr
<<@  (NUM n) sub bound          = (NUM n)
<<@  (VAR v) (sv, sub) bound    = if (not(isMember v bound) && v == sv) sub (VAR v)
<<@  (x1 +. x2) sub bound       = <<@ x1 sub bound  +. <<@ x2 sub bound
<<@  (x1 -. x2) sub bound       = <<@ x1 sub bound  -. <<@ x2 sub bound
<<@  (x1 *. x2) sub bound       = <<@ x1 sub bound  *. <<@ x2 sub bound
<<@  (x1 /. x2) sub bound       = <<@ x1 sub bound  /. <<@ x2 sub bound
<<@  (LET v x1 x2) (sv, sub) bound    = if (v == sv && x1 == sub)
                                           (<<@ x2 (sv, sub) bound)
                                           (LET v (<<@ x1 (sv, sub) [v:bound]) (<<@ x2 (sv, sub) [v:bound]))

eval :: LetExpr -> ?Q
eval expr
| cyclic expr               = ?None
| not (isEmpty (free expr)) = ?None
| otherwise                 = eval2 expr []

eval2 :: LetExpr [(Name, ?Q)] -> ?Q
eval2 (NUM n) bound         = ?Just n
eval2 (VAR v) bound         = case lookup v bound of
                                ?Just q = q
                                ?None = ?None
eval2 (x1 +. x2) bound      = eval2 x1 bound + eval2 x2 bound
eval2 (x1 -. x2) bound      = eval2 x1 bound - eval2 x2 bound
eval2 (x1 *. x2) bound      = eval2 x1 bound * eval2 x2 bound
eval2 (x1 /. x2) bound      = case zero_div (eval2 x2 bound) of
                                True = ?None
                                False = eval2 x1 bound / eval2 x2 bound
eval2 (LET v x1 x2) bound   = eval2 x2 [(v, eval2 x1 bound):bound]
eval2 _ bound               = abort "Unimplemented"

zero_div :: (?Q) -> Bool
zero_div ?None = False
zero_div (?Just {n,d})
    | n == 0 = True
    | otherwise = False


// flatten
// reverse
// unzip
// last
// removeDup
// isMember
// zip2
// removeMembers
// zip
// hd
// isEmpty
// take
// map
// tl


// Questions:
// - Creating a record in icl. No such record field.
// - Need type signature in icl and dcl??
// - No overloading functions with different type sigs? eg free LetExpr and free LetExprs []
// - dia 17 incorrect? Will not go past guards.
// - Should eval E Y read ?Just 42 or ?None? The assignment seems to suggest both.


