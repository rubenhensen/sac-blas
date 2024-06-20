module print

import StdEnv
import Data.Func
import Data.Functor
import Data.List
import Data.Maybe
import Control.Applicative
import Control.Monad
import qualified Data.Map as M

Start = 6 * 7

class dsl v a | print, ==., If, fun, :. v & +, -, * (v a)

class print v :: (v a)->v a | toString a
class (==.) infix 4 v :: (v a) (v a) -> v Bool | toString, == a
class If v :: (v Bool) (v a) (v a) -> v a
class (:.) infixr 1 v :: (v a) (v b) -> v b
class fun v :: (a->In a (v b)) -> v b
:: In a b = In infixr 0 a b

// ===== evaluation view =====
// basics
:: State :== [String]->[String]
:: E a = E (State->(a,State))

// ===== example =====

facFun n =
    fun \one = pure 1 In
    fun \fac = (\n.If (n ==. pure 0) one (n * fac (n - one))) In
    print (pure "fac ") :.
    print (pure n) :.
    print (pure " = ") :.
    print (fac (pure n))

// ===== pure, Functor, <*> and Monad =====
// instance pure E where pure x = E (\s -> (x, s))
// instance Functor E where fmap f (E wm) = E (\s1 -> case wm s1 of
//                                                     (m,s2) = (f m, s2))
// instance <*> E where (<*>) (E wf) (E wm) = E (\s1 -> case wf s1 of
//                                                     (f, s2) = case wm s2 of
//                                                                 (m, s3) = (f m, s3))
// instance Monad E where bind (E wa) f = E (\s1 -> case wa s1 of
//                                                     (a, s2) = case f a of
//                                                         (E x) = x s2)

// a -> m a
instance pure E where pure x = E (\s -> (x, s))
// (a -> b) (f a) -> (f b)
instance Functor E where fmap f m = pure f <*> m
// (f (a -> b)) (f a) -> f b
instance <*> E where (<*>) wf wm = wf >>= \f -> wm >>= \m -> pure (f m)
// (m a) (a -> m b) -> m b
instance Monad E where bind (E wa) f = E (\s1 -> case wa s1 of
                                                    (a, s2) = case f a of
                                                        (E x) = x s2)

out :: a -> E a | toString a
out a = E (\s -> (a, \c -> [toString a: c]))



// class print v :: (v a)->v a | toString a
// class (==.) infix 4 v :: (v a) (v a) -> v Bool | toString, == a
// class If v :: (v Bool) (v a) (v a) -> v a
// class (:.) infixr 1 v :: (v a) (v b) -> v b
// class fun v :: (a->In a (v b)) -> v b

instance print E where print ma         = ma >>= out
instance ==. E where (==.) ma mb        = (==) <$> ma <*> mb
instance If E where If mbl ma mb        = mbl >>= \bl -> if bl ma mb
instance :. E where (:.) (E a) (E b)    = E (\s1 -> case a s1 of
                                                        (xa, s2) = b s2)
instance fun E where fun f              = let (a In vc) = f a in vc

instance + (E a) | + a where (+) ma mb  = (+) <$> ma <*> mb
instance - (E a) | - a where (-) ma mb  = (-) <$> ma <*> mb
// instance / (E a) | / a where (/) ma mb  = (/) <$> ma <*> mb
instance * (E a) | * a where (*) ma mb  = (*) <$> ma <*> mb

eval :: (E a) -> [String]
eval (E a) = snd (a id) ["\n"]

