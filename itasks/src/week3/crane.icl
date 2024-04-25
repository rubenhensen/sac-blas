module crane
import StdEnv

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