module shallow

import StdEnv, StdArray, Data.Maybe
import Data.Functor, Control.Applicative, Control.Monad

Start = (runParser seqgram) seqgramtest

:: Gram
= Lit String // the given string as a literal
    | Idn // Identifier: a String starting with an isAlpha character (see StdChar)
    | Int // integer denotation
    | Seq [Gram] // sequence of grammar elements
    | Alt [Gram] // choice between alternative grammar elements
    | Def Name Gram Gram // assign the first grammar to the given name, yield second grammar
    | Var Name // represents the grammar of this name
:: Name :== String

:: Tree
= LIT String
    | IDN String
    | INT Int
    | SEQ [Tree]
    | ALT [Tree]
    | DEF Name Tree Tree
    | VAR Name



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


seqgram = seq [lit "[" , int , lit "]"]
seqgramtest = ["[", "9", "]"]
// (SEQ [(IDN "mylist"), (LIT "="), (SEQ [(LIT "["), (INT 7), (LIT ":"),
// (SEQ [(LIT "["), (INT 42), (LIT ":"), (LIT "[]"), (LIT "]")]), (LIT "]")])])

listIntInput = ["mylist", "=", "[", "7", ":", "[", "42", ":", "[]", "]", "]"]

:: Input :== [String]
:: Parse a = P (Input -> ?(a, Input))

// Functor, pure, <*>, MonadPlus, and Monad for Parse. The class MonadPlus contains mzero
// indicating failure and mplus

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

//  literal, identifier, integer, sequence, alternative, and definition
lit :: String -> Parse Tree
lit s = P \input -> if (hd input == s)
                        (?Just (LIT s, tl input))
                        (?None)

idn :: Parse Tree
idn = P \input -> if (isalpha input)
                        (?Just (IDN (hd input), tl input))
                        (?None)

// Should check if string is a number
int :: Parse Tree
int = P \input -> (?Just (INT (toInt (hd input)), tl input))

// var :: Parse Tree


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

def :: String (Parse Tree) (Parse Tree) -> Parse Tree
def s p1 p2 = (?Just (DEF (hd input), tl input))



alternative :: (Parse Tree) (Parse Tree) ->  Parse Tree
alternative p1 p2 = p1 <|> p2

var :: String -> Parse Tree
var s =  P \input -> if (hd input == s)
            (?Just (VAR s, tl input))
            (?None)

isalpha :: Input -> Bool
isalpha input = isAlpha (hd (stringToCharList (hd input)))

StringToCharList`	:: !String !Int !Int -> [Char]
StringToCharList` string 0 index
		= 	[]
StringToCharList` string length index
		= [string.[index] : StringToCharList` string (dec length) (inc index)]

stringToCharList	:: !String ->	[Char]
stringToCharList string = StringToCharList` string (size string) 0