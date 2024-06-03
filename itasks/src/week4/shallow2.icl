module shallow2

import StdEnv, StdArray, Data.Maybe
import Data.Functor, Control.Applicative, Control.Monad
from Data.Map import :: Map, get, Bin, Tip, put, mapSize, newMap

Start = output ((runParser listIntGramParser) listIntInput)

:: Gram
= Lit String                // the given string as a literal
    | Idn                   // Identifier: a String starting with an isAlpha character (see StdChar)
    | Int                   // integer denotation
    | Seq [Gram]            // sequence of grammar elements
    | Alt [Gram]            // choice between alternative grammar elements
    | Def Name Gram Gram    // assign the first grammar to the given name, yield second grammar
    | Var Name              // represents the grammar of this name
:: Name :== String

listIntGram :: Gram
listIntGram
= Def "list" (Alt   [ Lit "[]"
                    , Seq   [ Lit "["
                            , Int
                            , Lit ":"
                            , Var "list"
                            , Lit "]"
                            ]
                    ]
            )
  (Seq [Idn, Lit "=", Var "list"])

:: Tree
= LIT String
    | IDN String
    | INT Int
    | SEQ [Tree]
    | ALT [Tree]
    | DEF Name Tree Tree
    | VAR Name

// def :: ((Parse a) -> In (Parse a) (Parse b)) -> Parse b
listIntGramParser :: Parse Tree
listIntGramParser = def \list -> (alt [lit "[]",
                                    seq [
                                        lit "[",
                                        int,
                                        lit ":",
                                        list,
                                        lit "]"
                                    ]]) In
                                (seq [idn, lit "=", list])

listIntInput = ["mylist", "=", "[", "7", ":", "[", "42", ":", "[]", "]", "]"] 

:: Input :== [String]
:: Parse a = P (Input -> ?(a, Input))

output :: (?(a, Input)) -> a
output ?None = undef
output (?Just (a, i)) = a

instance Functor Parse
        // fmap :: (a -> b) (f a) -> (f b)
    where fmap f (P fa) = P \input -> case fa input of
            ?Just (a, i) = ?Just (f a, i)
            ?None     = ?None

instance pure Parse
        // pure :: a -> f a
    where pure a = P \input -> ?Just (a, input)

instance <*> Parse
        // <*> :: (f (a -> b)) (f a) -> f b
    where (<*>) (P pf) (P pa) = P \input -> case pf input of
            ?None = ?None
            (?Just (f, rest)) = case (pa rest) of 
                ?None = ?None
                ?Just (a, restrest) = ?Just (f a, restrest)

instance MonadPlus Parse
	// mzero :: m a
	// mplus :: !(m a) (m a) -> m a
    where   mzero = P \input -> ?None
            mplus (P pa) (P pb) = P \input -> case pa input of
                    ?Just a = ?Just a
                    ?None = pb input

instance Alternative Parse
    where   empty = P \input -> ?None
            (<|>) (P pa) (P pb) = P \input -> case pa input of
                    ?Just a = ?Just a
                    ?None = pb input

instance Monad Parse
        // bind :: (m a) (a -> m b) -> m b
    where bind (P pa) f = P \input -> case pa input of
            ?Just (a, i) = case (f a) of
                (P pb) = pb i
            ?None = ?None

// read :: String -> Parse Tree
// read v = P \s -> case get v s.env of
//     ?Just (P pt) = pt s
//     ?None = ?None

// write :: String (Parse Tree) -> Parse (Parse Tree)
// write v x = P \s = ?Just (x, {s & env = put v x s.env})

lit :: String -> Parse Tree
lit str = P \s -> if (hd s == str)
                        (?Just (LIT str, tl s))
                        (?None)

idn :: Parse Tree
idn = P \s -> if (isalpha s)
                        (?Just (IDN (hd s), tl s))
                        (?None)

int :: Parse Tree
int = P \s -> if (isNum (hd s)) ((?Just (INT (toInt (hd s)), tl s))) (?None)

// ---- This seems very cumbersome to me, is there a cleaner way of programming this? ----
seq :: [Parse Tree] -> Parse Tree
seq [x] = P \input -> case (runParser x) input of
    ?Just (a, i) = ?Just (SEQ [a], i)
    ?None = ?None
seq [] = P \input -> ?None
seq l = P \input -> case (runParser(sequencelist l)) input of
    ?Just (a, i) = ?Just (SEQ a, i)
    ?None = ?None

sequence :: (Parse [Tree]) (Parse Tree) -> Parse [Tree]
sequence p1 p2 = p1 >>= \a -> p2 >>= \b ->  pure (a ++ [b])

sequencelist :: [Parse Tree]-> Parse [Tree]
sequencelist l = foldl sequence (pure []) l

runParser :: (Parse a) -> (Input -> ?(a, Input))
runParser (P p) = p
// ---------------------------------------------------------------------------------

alt :: [Parse Tree] -> Parse Tree
alt [x] = P \input -> case (runParser x) input of
    ?Just (a, i) = ?Just (ALT [a], i)
    ?None = ?None
alt [] = P \input -> ?None
alt l = P \input -> (runParser (foldl (<|>) empty l)) input

alternative :: (Parse Tree) (Parse Tree) ->  Parse Tree
alternative p1 p2 = p1 <|> p2

// var :: String -> Parse Tree
// var str =  P \s -> (runParser (read str)) s

// :: Parse a = P (Input -> ?(a, Input))

def :: ((Parse a) -> In (Parse a) (Parse b)) -> Parse b
def fb = let (a In b) = fb a in b

:: In a b = In infix 0 a b

isalpha :: [String] -> Bool
isalpha input = isAlpha (hd (stringToCharList (hd input)))

StringToCharList`	:: !String !Int !Int -> [Char]
StringToCharList` string 0 index
		= 	[]
StringToCharList` string length index
		= [string.[index] : StringToCharList` string (dec length) (inc index)]

stringToCharList	:: !String ->	[Char]
stringToCharList string = StringToCharList` string (size string) 0


isNum :: String -> Bool
isNum str =  isNum` (stringToCharList str)

isNum` :: [Char] -> Bool
isNum` [] = False
isNum` [x] = isDigit x
isNum` [x:xs] = if (isDigit x) (isNum` xs) (False)


// 2.4 
// :: Parse1 a = P1 (Input -> ?(a, Input)) // used here
// :: Parse2 a = P2 (Input -> (?a, Input)) // the default state Monad
// Parse1 errors when it meets invalid input, giving you a clear and simple program that crashes at the first possible point.
// Parse2 could be used to continue parsing even after you have encountered an error, to see if there are other parts that are wrong.
