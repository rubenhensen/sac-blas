module shapeStart

/*
A starting point for assignment 9 in advanced Programming, May 2023.
Pieter Koopman, Radboud University Nijmegen, The Netherlands. pieter@cs.ru.nl
*/

import StdEnv
import Text => qualified join
import Control.Applicative, Data.Functor, Control.Monad.Fail
from Control.Monad import class Monad(bind,>>=,>>|), class MonadPlus(..)
from Data.Map import :: Map, get, Bin, Tip, put, mapSize, newMap

// Start = runE e_tagless
// Start = runC e_tagless
Start = runP e_tagless

// ===== given ======

// e_plain :: Bool
// e_plain =
//     let p0   = {x=6.0, y=0.0} in
//     let p1   = {x=3.0, y=0.0} in
//     let disc = Scale 5.0 Circle in
//     let lens = disc * (Trans p1 disc) in
//     ~ (inside p0 lens) * inside p0 (~ lens)

e_tagless =
    def \p0   -> lit {x=6.0, y=0.0} In
    def \p1   -> lit {x=3.0, y=0.0} In
    def \disc -> scale (lit 5.0) circle In
    def \lens -> disc * trans p1 disc In
    ~ (inside p0 lens) * inside p0 (~ lens)

e_tagless1 = inside (lit {x=6.0, y=0.0}) (scale (lit 5.0) circle)

e_tagless2 = def \p0   -> lit {x=6.0, y=0.0} In
    inside p0 (scale (lit 5.0) circle)

e_tagless3 =    def \p0   -> lit {x=6.0, y=0.0} In
                def \disc -> scale (lit 5.0) circle In
                inside p0 disc

e_tagless4 = def \p0   -> lit {x=6.0, y=0.0} In
    inside p0 (scale (lit 5.0) circle) * inside p0 (scale (lit 5.0) circle)

e_tagless5 =    def \p0   -> lit {x=6.0, y=0.0} In
                def \disc -> scale (lit 5.0) circle In
                inside p0 disc

:: Point = {x :: Real, y :: Real}
:: Shape = Circle
        | Intersection Shape Shape
        | Trans Point Shape
        | Invert Shape
        | Scale Real Shape

instance +        Point where (+) p q = {x = p.x + q.x, y = p.y + q.y}
instance -        Point where (-) p q = {x = p.x - q.x, y = p.y - q.y}
instance toString Point where toString p = "{x=" <+ p.x <+ ", y=" <+ p.y <+ "}"
instance *        Shape where (*) x y = Intersection x y
instance *        Bool  where (*) x y = x && y
instance ~        Shape where  ~ s = Invert s
instance ~        Bool  where  ~ b = not b

inside` :: Point Shape -> Bool
inside` point shape
    = case shape of
        Circle           = point.x * point.x + point.y * point.y <= 1.0
        Scale r shape    = inside` {x = point.x / r, y = point.y / r} shape
        Trans t shape    = inside` (point - t) shape
        Invert  shape    = not (inside` point shape)
        Intersection x y = inside` point x && inside` point y

// ===== dsl =====

class shapes v where
    circle :: v Shape
    // point :: v Point
    intersection :: (v Shape) (v Shape) -> (v Shape)
    trans :: (v Point) (v Shape) -> (v Shape)
    invert :: (v Shape) -> (v Shape)
    scale :: (v Real) (v Shape) -> (v Shape)
    inside :: (v Point) (v Shape) -> (v Bool)
    lit :: a -> v a | toString a
    def :: ((v a) -> In (v a) (v b)) -> v b

:: In a b = In infix 0 a b

// ===== evaluation =====

runE (E f) = f

:: E a = E a

instance shapes E where
    // circle :: v Shape
    circle = E Circle
    // intersection :: (v Shape) (v Shape) -> (v Shape)
    intersection (E s1) (E s2) = E (Intersection s1 s2)
    // trans :: (v Point) (v Shape) -> (v Shape)
    trans (E p) (E s) = E (Trans p s)
    // invert :: (v Shape) -> (v Shape)
    invert (E s) = E (Invert s)
    // scale :: (v Real) (v Shape) -> (v Shape)
    scale (E r) (E s) = E (Scale r s)
    // inside :: (v Point) (v Shape) -> (v Bool)
    inside (E p) (E s) = E (inside` p s)
    // lit :: a -> v a
    lit s = E s
    // def :: ((v a) -> In (v a) (v b)) -> v b
    def fb = let (a In b) = fb a in b

instance +        (E Point) where (+) (E p) (E q) = E ({x = p.x + q.x, y = p.y + q.y})
instance -        (E Point) where (-) (E p) (E q) = E ({x = p.x - q.x, y = p.y - q.y})
instance toString (E Point) where toString (E p) = "{x=" <+ p.x <+ ", y=" <+ p.y <+ "}"
instance *        (E Shape) where (*) (E x) (E y) = E (Intersection x y)
instance *        (E Bool)  where (*) (E x) (E y) = E (x && y)
instance ~        (E Shape) where  ~ (E s) = E (Invert s)
instance ~        (E Bool)  where  ~ (E b) = E (not b)

// ===== counting circles =====

runC (C f) = f

:: C a = C Int

instance shapes C where
    // circle :: v Int
    circle = C 1
    // intersection :: (v Int) (v Int) -> (v Int)
    intersection (C s1) (C s2) = C (s1 + s2)
    // trans :: (v Int) (v Int) -> (v Int)
    trans (C p) (C s) = C s
    // invert :: (v Shape) -> (v Shape)
    invert (C s) = C s
    // scale :: (v Real) (v Shape) -> (v Shape)
    scale (C r) (C s) = C s
    // inside :: (v Point) (v Shape) -> (v Bool)
    inside (C p) (C s) = C s
    // lit :: a -> v a
    lit s = C 0
    // def :: ((v a) -> In (v a) (v b)) -> v b
    def fb = let ((C a) In (C b)) = fb (C 0) in C (b+a)

instance +        (C Point) where (+) (C p) (C q) = C 0
instance -        (C Point) where (-) (C p) (C q) = C 0
instance toString (C Point) where toString (C p) = "toString C Point"
instance *        (C Shape) where (*) (C x) (C y) = C (x + y)
instance *        (C Bool)  where (*) (C x) (C y) = C (x + y)
instance ~        (C Shape) where  ~ (C s) = C s
instance ~        (C Bool)  where  ~ (C b) = C b


// ===== printing =====

:: Print a =: P (PS -> (a, PS))
:: PS       = {i :: Int, out :: [String]}

instance pure      Print where pure a = P (\ps -> (a, ps))
instance Monad     Print where bind (P f) a = P \s -> case f s of
                                                        (x, t) = case a x of
                                                            (P g) = g t
instance Functor   Print where fmap f p = (pure f) <*> p
instance <*>       Print where (<*>) f x = f >>= \f` -> x >>= \x` -> pure (f` x`)
instance MonadFail Print where fail s = P (\ps -> (undef, {ps & out = [s:ps.out]}))

print :: a -> Print b | toString a
print a = P \s = (undef, {s & out = [toString a: s.out]})

fresh :: Print String
fresh  = P \s = ("v" <+ s.i, {s & i = s.i + 1})

write :: String -> Print a
write v = P \s -> (undef, {s & out = [v:s.out]})


runP :: (Print a) -> String | toString a
runP (P f) = "\n" <+ 'Text'.join "" (reverse (snd (f {i=0, out=[]})).out)

instance toString Shape
    where toString shape = case shape of
            Circle           = "Circle"
            Scale r shape    = "Scale " <+ r <+ toString shape
            Trans t shape    = "Trans " <+ "{x=" <+ t.x <+ ", y=" <+ t.y <+ "}" <+ toString shape
            Invert  shape    = "! " <+ toString shape
            Intersection x y = "Intersection " <+ toString x <+ toString y

instance +        (Print Point) where (+) p q = print "(" >>| p >>| print "+" >>| q >>| print ")"
instance -        (Print Point) where (-) p q = print "(" >>| p >>| print "-" >>| q >>| print ")"
instance toString (Print Point) where toString p = "toString Print Point"
instance *        (Print Shape) where (*) x y = print "(" >>| x >>| print "*" >>| y >>| print ")"
instance *        (Print Bool)  where (*) x y = print "(" >>| x >>| print "*" >>| y >>| print ")"
instance ~        (Print Shape) where  ~ s = print "!" >>| s
instance ~        (Print Bool)  where  ~ b = print "!" >>| b
instance toString (Print String) where toString p = "var"

instance shapes Print where
    // circle :: v (P (PS -> (a, PS)))
    circle = P \s -> (undef, {s & out = ["Circle":s.out]})
    // intersection :: (v Int) (v Int) -> (v Int)
    intersection s1 s2 = print "Intersection" >>| s1 >>| s2
    // trans :: (v Int) (v Int) -> (v Int)
    trans p s =  print "Trans" >>| p >>| s
    // invert :: (v Shape) -> (v Shape)
    invert s =  print "!" >>| s
    // scale :: (v Real) (v Shape) -> (v Shape)
    scale r s =print "Scale" >>| r >>| s
    // inside :: (v Point) (v Shape) -> (v Bool)
    inside p s = print "inside" >>| p >>| s >>| pure undef
    // lit :: a -> v a
    lit s = print s
    // def :: ((v a) -> In (v a) (v b)) -> v b
    def f =  fresh >>= \n ->
                let (e1 In e2) = f (print n) in
                print "\ndef " >>| print n >>| print " = " >>| e1 >>| print " In " >>| e2

printNL :: Print a
printNL = P \s = (undef, {s & out = ["\n" <+ repeatn (s.i*2) ' ' : s.out]})

