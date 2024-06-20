module exam

import StdEnv
import Data.Func
import Data.Functor
import Data.Functor.Identity
import Data.Tuple
import Data.List
import Data.Maybe
import Control.Applicative
import Control.Monad
import qualified Data.Map as M

:: BM a b = {ab::a->b, ba::b->a}
bm = {ab=id, ba=id}

:: Expr a
  = Lit a
  | Add (BM a Int) (Expr Int) (Expr Int)
  | Sub (BM a Int) (Expr Int) (Expr Int)
  | E.b: Equ (BM a Bool) (Expr b) (Expr b) & ==, TC b
  | Not (BM a Bool) (Expr Bool)
  | Var Var
  | Hd (Expr [a])                               // new
  | E.b: Tl (BM a [b]) (Expr [b]) & TC b              // new
  | E.b: Cons (BM a [b]) (Expr b) (Expr [b]) & TC b   // new
  | E.b: Nil (BM a [b]) & TC b                        // new
  | E.b: IsNil (BM a Bool) (Expr [b]) & TC b           // new

lit = Lit
add = Add bm
sub = Sub bm
equ = Equ bm
nott = Not bm
var = Var
hdd = Hd
tll = Tl bm
cons = Cons bm
nil = Nil bm
isNil = IsNil bm

:: Var :== String

:: Stmt
  = E.a: (=.) infix 2 Var (Expr a) & TC, toString a
  | (:.) infixr 1 Stmt Stmt
  | If (Expr Bool) Stmt Stmt
  | While (Expr Bool) Stmt
  | Skip

fibs :: Int -> Stmt
fibs n =
    "l" =. cons (lit 1) (cons (lit 1) nil) :.
    "n" =. lit n :.
    While (nott (equ (var "n") (lit 0))) (
        "l" =. cons (add (hdd (var "l")) (hdd (tll (var "l")))) (var "l") :.
        "n" =. sub (var "n") (lit 1)
    )

test :: Int -> ?[Int]
test n = eval (fibs n) "l"

eval :: Stmt Var -> ?a
eval stmt v = ?None // improve me!

evalE :: (Expr a) State -> ?a | TC a
evalE e s = case e of
    Lit n = ?Just n
    Add {ab, ba} a b = ba <$> ((+) <$> evalE a s <*> evalE b s)
    Sub {ab, ba} a b = ba <$> ((-) <$> evalE a s <*> evalE b s)
    Equ {ab, ba} a b = ba <$> ((==) <$> evalE a s <*> evalE b s)
    Not {ab, ba} a   = ba <$> (not <$> evalE a s)
    Var          a   = read a s
    Hd           a   = case evalE a s of
                            ?Just [a:x] = ?Just a
                            _ = ?None
    Tl  {ab, ba} a   = case evalE a s of
                            ?Just [a:x] = ?Just (ba x)
                            _           = ?None
    Cons  {ab, ba} a b = ba <$> (mycons <$> evalE a s <*> evalE b s)
    Nil   {ab, ba}     = ?Just (ba [])
    IsNil {ab, ba} a   = case evalE a s of
                            ?Just [] = ?Just (ba True)
                            ?Just l  = ?Just (ba False)

evalS :: Stmt State -> ?State
evalS (=. v ea) st     = case evalE ea st of
                            ?Just x = ?Just (write v x st)
                            _ = ?None
evalS (:. s1 s2) st   = case evalS s1 st of
                            ?Just newst = evalS s2 newst
                            _           = ?None
evalS (If eb s1 s2) st  = case evalE eb st of
                            ?Just True  =  evalS s1 st
                            ?Just False =  evalS s2 st
                            _           = ?None
evalS (While eb s) st   = case evalE eb st of
                            ?Just True  =  evalS (s :. (While eb s)) st
                            ?Just False =  ?Just st
                            _           = ?None
evalS Skip st           = pure st


mycons :: a [a] -> [a]
mycons a l = [a:l]

:: State :== 'M'.Map Var Dynamic

write :: Var a State -> State | TC a
write v a s = 'M'.put v (dynamic a) s

read :: Var State -> ?a | TC a
read v s = case 'M'.get v s of
    ?Just (x::a^) = ?Just x
    _ = ?None

Start = evalE (lit 5)
