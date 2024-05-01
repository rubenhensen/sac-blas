module crane
import StdEnv
import Data.Functor
import Control.Applicative
import Control.Monad

// Start = MoveDown :. Lock :. MoveUp :. Unlock
// Start = MoveDown :. Lock //:. MoveUp :. MoveToShip :. MoveDown :. Unlock
Start = (eval loadShip) (Ok state0)

t1 :: (Action High Low)
t1 = moveDown :. lock

loadShip
	= whileContainerBelow (
		moveDown :.
		lock :.
		moveUp :.
		moveToShip :.
		wait :.
		moveDown :.
		wait :.
		unlock :.
		moveUp :.
		moveToQuay
	)


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


state0 :: State High
state0
	= {
		onShip = []
		, onQuay = ["apples","beer","cheese"]
		, craneOnQuay = True
		, locked = ?None
	}

// Functor
instance Functor ErrorOk
	   // fmap :: (a -> b) (f a) -> f b
	where fmap f wrapped_a = (pure f) <*> wrapped_a

// Applicative
instance pure ErrorOk
	   // pure f :: a -> f a
	where pure a = Ok a

instance <*> ErrorOk
	   // (<*>) :: (f (a -> b)) (f a) -> f b
	where (<*>) wrapped_f wrapped_a = wrapped_f >>= (\f -> wrapped_a >>= \a -> pure (f a))

// Monad
instance Monad ErrorOk
		// (>>=) :: (m a) (a -> m b) -> m b
	where  bind (Ok a) to_wrapped_f = to_wrapped_f a
		   bind (Error s) to_wrapped_f = Error s

:: State highLow
	= {
		onShip :: [Container]
		, onQuay :: [Container]
		, craneOnQuay :: Bool
		, locked :: ? Container
	}

:: Container :== String

to :: b (State a) -> State b
to a s = {s & onShip = s.onShip}

toB :: (State a) -> State b
toB s = {s & onShip = s.onShip}

:: Step i f :== (ErrorOk (State i)) -> ErrorOk (State f)
:: ErrorOk s = Error String | Ok s

// fmap :: (a -> b) (f a) -> (f b)
// pure :: a -> (f a)
// (<*>) :: (f (a -> b)) (f a) -> f b
// (>>=) :: (m a) (a -> m b) -> m b

eval :: (Action i f) -> (Step i f)
eval (MoveToShip _ _) 				= \eoState -> eoState >>= \state -> pure {state & craneOnQuay = False}
eval (MoveToQuay _ _) 				= \eoState -> eoState >>= \state -> pure {state & craneOnQuay = True}
eval (MoveUp _ {ba})				= \eoState -> eoState >>= \state -> (pure (to (ba High) state))
eval (MoveDown _ {ba}) 				= \eoState -> eoState >>= \state -> (pure (to (ba Low) state))
eval (Lock bm1 bm2) 				= \eoState -> eoState >>= \state -> pure (locking state)
eval (Unlock bm1 bm2) 				= \eoState -> eoState >>= \state -> pure (unlocking state)
eval (Wait {ab}) 					= \eoState -> eoState >>= \state -> pure (toB state)
eval (a1 :. a2) 					= \eoState -> (eval a2) ((eval a1) eoState)
eval (WhileContainerBelow bm a) 	= \eoState -> eoState >>= \state -> if 	(containerBelow state)
																			((eval (WhileContainerBelow bm a)) (((eval a) eoState) >>= \state -> pure (toB state)))
																			(pure (toB state))

containerBelow :: (State a) -> Bool
containerBelow {onShip, onQuay, craneOnQuay, locked} = case (onShip, onQuay, craneOnQuay, locked) of
	(_, [], True, _) 		= False
	([], _, False, _) 		= False
	(_, _, _, _) 			= True

locking :: (State a) -> (State b)
locking {onShip, onQuay, craneOnQuay, locked} = case (onShip, onQuay, craneOnQuay, locked) of
	(_, _, _, ?Just c) 		= {State | onShip=onShip, onQuay=onQuay, craneOnQuay=craneOnQuay, locked=locked}
	(_, [], True, ?None) 	= {State | onShip=onShip, onQuay=onQuay, craneOnQuay=craneOnQuay, locked=locked}
	(_, _, True, ?None) 	= {State | onShip=onShip, onQuay=(tl onQuay), craneOnQuay=craneOnQuay, locked=(?Just (hd onQuay))}
	([], _, False, ?None) 	= {State | onShip=onShip, onQuay=onQuay, craneOnQuay=craneOnQuay, locked=locked}
	(_, _, False, ?None) 	= {State | onShip=(tl onShip), onQuay=onQuay, craneOnQuay=craneOnQuay, locked=(?Just (hd onShip))}

unlocking :: (State a) -> (State b)
unlocking {onShip, onQuay, craneOnQuay, locked} = case (onShip, onQuay, craneOnQuay, locked) of
	(_, _, _, ?None) 		= {State | onShip=onShip, onQuay=onQuay, craneOnQuay=craneOnQuay, locked=locked}
	(_, _, True, ?Just c) 	= {State | onShip=onShip, onQuay=[c:onQuay], craneOnQuay=craneOnQuay, locked=(?None)}
	(_, _, False, ?Just c) 	= {State | onShip=[c:onShip], onQuay=onQuay, craneOnQuay=craneOnQuay, locked=(?None)}


print :: (Action i f) -> [String]
print (MoveToShip _ _) 				= ["MoveToShip"]
print (MoveToQuay _ _) 				= ["MoveToQuay"]
print (MoveUp _ _)					= ["MoveUp"]
print (MoveDown _ _) 				= ["MoveDown"]
print (Lock _ _) 					= ["Lock"]
print (Unlock _ _) 					= ["Unlock"]
print (Wait _) 						= ["Wait"]
print (a1 :. a2) 					= print a1 ++ print a2
print (WhileContainerBelow _ a) 	= ["WhileContainerBelow"] ++ print a

optimize :: (Action i f) -> (Action i f)
optimize (MoveToShip bm1 bm2) 		= (MoveToShip bm1 bm2)
optimize (MoveToQuay bm1 bm2) 		= (MoveToQuay bm1 bm2)
optimize (MoveUp bm1 bm2)			= (MoveUp bm1 bm2)
optimize (MoveDown bm1 bm2) 		= (MoveDown bm1 bm2)
optimize (Lock bm1 bm2) 			= (Lock bm1 bm2)
optimize (Unlock bm1 bm2) 			= (Unlock bm1 bm2)
optimize (Wait bm) 					= (Wait bm)
// optimize ((Wait bm) :. a2) 		= optimize a2
optimize (a1 :. a2) 				= optimize a1 :. optimize a2
optimize (WhileContainerBelow bm a) = (WhileContainerBelow bm (optimize a))
