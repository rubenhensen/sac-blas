module crane
import StdEnv
import Data.Functor
 
// Start = MoveDown :. Lock :. MoveUp :. Unlock
// Start = MoveDown :. Lock //:. MoveUp :. MoveToShip :. MoveDown :. Unlock
Start = moveDown :. lock

t1 :: (Action High Low)
t1 = moveDown :. lock

:: Action a b 
	= MoveToShip 			(BM a High) (BM b High)		// move the crane to the ship
	| MoveToQuay 			(BM a High) (BM b High)		// move the crane to the quay
	| MoveUp 				(BM a Low)  (BM b High)		// moves the crane up
	| MoveDown 				(BM a High) (BM b Low)		// moves the crane down
	| Lock 					(BM a Low)  (BM b Low)		// locks the top container of the stack under the crane
	| Unlock 				(BM a Low)  (BM b Low)		// unlocks the container the crane is carrying, put it on the stack
	| Wait 					(BM a b)					// do nothing
	| E.c:(:.) infixl 1 	(Action a c) (Action c b)	// sequence of two actions
	| WhileContainerBelow 	(BM a b) (Action a b) 		// repeat action while there is a container at current position

:: High = High
:: Low = Low
:: BM a b = {ab :: a -> b, ba :: b -> a}

bm :: BM a a
bm = {ab = id, ba = id}

moveToShip 			= MoveToShip bm bm
moveToQuay 			= MoveToQuay bm bm
moveUp 				= MoveUp bm bm
moveDown 			= MoveDown bm bm
lock 				= Lock bm bm
unlock 				= Unlock bm bm
wait 				= Wait bm
whileContainerBelow = WhileContainerBelow bm


:: ErrorOk s = Error String | Ok s

:: State highLow
	= {
		onShip :: [Container]
		, onQuay :: [Container]
		, craneOnQuay :: Bool
		, locked :: ? Container
	}

:: Container :== String

state0 :: State High
state0
	= {
		onShip = []
		, onQuay = ["apples","beer","cheese"]
		, craneOnQuay = True
		, locked = ?None
	}

:: Step i f :== (ErrorOk (State i)) -> ErrorOk (State f)

// functor
instance Functor (Step i f)
		// fmap :: (a -> b) (f a) -> f b
	where fmap f s = \st -> case s st of
						Error str = Error str
						Ok step = Ok (f step)


// // applicative
// instance 
// pure f :: a -> f a
// <*> :: (f (a -> b)) (f a) -> f b

// // monad
// bind :: (m a) (a -> m b) -> m b


// eval :: (Action i f) -> Step i f
// eval (MoveToShip bm1 bm2) = \s -> case s of
// 	(Error s) = Error s
// 	(Ok i) = Ok {i & craneOnQuay = False}
// eval (MoveToQuay bm bm) = 
// eval (MoveUp bm bm)	= 
// eval (MoveDown bm bm) = 
// eval (Lock bm bm) = 
// eval (Unlock bm bm) = 
// eval (Wait bm) = 
// eval (a1 :. a2) = 
// eval (WhileContainerBelow bm bm)

// loadShip
// 	= WhileContainerBelow (
// 		MoveDown :.
// 		Lock :.
// 		MoveUp :.
// 		MoveToShip :.
// 		Wait :.
// 		MoveDown :.
// 		Wait :.
// 		Unlock :.
// 		MoveUp :.
// 		MoveToQuay
// 	)