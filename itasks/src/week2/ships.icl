module ships
import StdEnv
from Math.Geometry import pi

// I feel like I am 99% there, I am just not able to figure out why

Start = eval E6

E0 = Return (real 1.0)
E1 = Cond (Le (real 1.0) (real 2.0)) (Return (real 3.0))
E2 = Ship "s" (Return (var "s"))
E3 = Ship "s" (Return (selectName (var "s")))
E4 = Ship "s" (Cond (HasFlag (var "s") [NL,UK]) (Return (selectName (var "s"))))
E5 = Farm "w" (Ship "s" (Cond (Le (dist (var "s") (var "w")) (real 10.0)) (Return (selectName (var "w")))))
E6 = Port "p" (Ship "s" (Cond (Le (dist (var "s") (var "p")) (real 0.50)) (Return (selectName (var "p")))))

var s 			= Var bm s
real r 			= Real bm r
selectName e 	= SelectName bm e
add l r 		= Add bm l r
dist l r 		= Distance bm l r

:: Gen a
  = Ship String (Gen a)
  | Farm String (Gen a)
  | Port String (Gen a)
  | Cond (Cond a) (Gen a)
  | Return (Expr a)

:: Cond a
  = Le (Expr Real) (Expr Real)
  | E.b:Eq (Expr b) (Expr b) & == b
  | Not (Cond Bool)
  | And (Cond Bool) (Cond Bool)
  | E.b:HasFlag (Expr b) [Country] & toFlag b
  | E.b:HasName (Expr b) [String] & toName b
  | HasKind (Expr Sh) [Kind]

:: Expr a
  = Var 			(BM a StateVal) String
  | Real 			(BM a Real) Real
  | E.b:SelectName 	(BM a String) (Expr b) & toName b
  | Add 			(BM a Real) (Expr Real) (Expr Real)
  | E.b:Distance 	(BM a Real) (Expr b) (Expr b) & toPosition b

:: StateVal
	= Sh Sh
	| Fa Fa
	| Po Po

:: State :== String -> StateVal

:: BM a b = {
	ab :: a -> b, ba :: b -> a
	// ,	tab :: A.t:(t a) -> t b, tba :: A.t:(t b) -> t a
	}

emptyState :: State
emptyState = \x -> undef

(|->) infix :: String StateVal -> State -> State
(|->) v x = \s y -> if (y == v) x (s y)

// :: Var :== String

eval :: (Gen a) -> [a]
eval gen = evalGen gen emptyState

evalGen :: (Gen a) State -> [a]
evalGen g s = case g of
	Cond c gen = if (evalCond c s) (evalGen gen s) []
	Return e  = [evalExpr e s]
	Ship v gen = flatten [evalGen gen ((v |-> (Sh x)) s) \\ x <- ships] // Why do I have to do this weird Sh x thing?
	Farm v gen = flatten [evalGen gen ((v |-> (Fa x)) s) \\ x <- farms] 
	Port v gen = flatten [evalGen gen ((v |-> (Po x)) s) \\ x <- ports]

evalCond :: (Cond a) State -> Bool
evalCond c s = case c of
	Le e1 e2 		= evalExpr e1 s <= evalExpr e2 s
	Eq e1 e2 		= evalExpr e1 s == evalExpr e2 s
	Not c			= not (evalCond c s)
	And c1 c2		= evalCond c1 s && evalCond c2 s
	HasFlag e cs	= isMember (toFlag (evalExpr e s)) cs
	HasName e ns 	= isMember (toName (evalExpr e s)) ns
	HasKind e ks 	= isMember (evalExpr e s).Sh.kind ks

evalExpr :: (Expr a) State -> a
evalExpr e s = case e of
  Var {ba} v  			= ba (s v)
  Real {ba} r			= ba r
  SelectName {ba} e 	= ba (toName (evalExpr e s))
  Add {ba} e1 e2  		= ba (evalExpr e1 s + evalExpr e2 s)
  Distance {ba} e1 e2  	= ba (distance (evalExpr e1 s) (evalExpr e2 s))

// instance + (Expr Real) where (+) x y = Add bm x y

bm :: BM a a
bm = {ab = id, ba = id}

r_earth :== 6371.009  // radius of Earth in km

:: Sh
 =	{ name      :: !String
	, size      :: !Int
	, kind      :: !Kind
	, flag      :: !Country
	, status    :: !Status
	, position  :: !Position
	}
:: Position
 =	{ latitude  :: !Real
	, longitude :: !Real
	}
:: Fa
 =	{ name      :: !String
	, country   :: !Country
	, position  :: !Position
	}
:: Po
 =	{ name      :: !String
	, position  :: !Position
	}
:: Kind    = Cargo | Fisher | Navy | Tanker | Tugboat
:: Country = NL | UK | DE | FR | BE | BR | VE | PH | DK | LR | MT
:: Status  = Underway | Moored

distance :: a b -> Real | toPosition a & toPosition b
distance a b = r_earth * sqrt (dLat ^ 2.0 + (cos mLat * dLong) ^ 2.0)
where
	p     = toPosition a
	q     = toPosition b
	dLat  = (p.latitude  - q.latitude)  * pi / 180.0
	mLat  = (p.latitude  + q.latitude)  * pi / 360.0
	dLong = (p.longitude - q.longitude) * pi / 180.0
	mLong = (p.longitude + q.longitude) * pi / 360.0

class toPosition a :: a -> Position
instance toPosition Position where toPosition p = p
instance toPosition Sh       where toPosition s = s.Sh.position
instance toPosition Fa       where toPosition w = w.Fa.position
instance toPosition Po       where toPosition p = p.Po.position
instance toPosition StateVal where
								toPosition (Sh s) = s.Sh.position
								toPosition (Fa s) = s.Fa.position
								toPosition (Po s) = s.Po.position

class toName a :: a -> String
instance toName Sh       	where toName s = s.Sh.name
instance toName Fa       	where toName w = w.Fa.name
instance toName Po       	where toName p = p.Po.name
instance toName String   	where toName p = "Type error in toName"
instance toName Real   		where toName p = "Type error in toName"
instance toName StateVal 	where
								toName (Sh s) = s.Sh.name
								toName (Fa s) = s.Fa.name
								toName (Po s) = s.Po.name

class toFlag a :: a -> Country
instance toFlag Sh       	where toFlag s = s.Sh.flag
instance toFlag Fa       	where toFlag w = w.Fa.country
instance toFlag StateVal 	where
								toFlag (Sh s) = s.Sh.flag
								toFlag (Fa s) = s.Fa.country
								toFlag (Po s) = undef

// This seems unnecessarily verbose
instance == Country where
	(==) NL NL = True
	(==) UK UK = True
	(==) DE DE = True
	(==) FR FR = True
	(==) BE BE = True
	(==) BR BR = True
	(==) VE VE = True
	(==) PH PH = True
	(==) DK DK = True
	(==) LR LR = True
	(==) MT MT = True
	(==) _ _ = False

instance == Kind where
	(==) Cargo Cargo = True
	(==) Fisher Fisher = True
	(==) Navy Navy = True
	(==) Tanker Tanker = True
	(==) Tugboat Tugboat = True
	(==) _ _ = False

ports :: [Po]
ports
 = [ { Po
     | name     = "Texel"
	 , position = {latitude = 53.03933, longitude = 4.85035}
	 }
   , { Po
     | name     = "Den Helder"
	 , position = {latitude = 52.95938, longitude = 4.79614}
	 }
   ]

ships :: [Sh]
ships
 = [ { name     = "TX10 Emmie"
	 , size     = 41
	 , kind     = Fisher
	 , flag     = NL
	 , status   = Moored
	 , position = {latitude = 53.03957, longitude = 4.85033}
	 }
   , { name     = "TX27 NOVA CURA"
	 , size     = 23
	 , kind     = Fisher
	 , flag     = NL
	 , status   = Underway
	 , position = {latitude = 53.04125, longitude = 4.85224}
	 }
   , { name     = "HNLMS Tromp"
	 , size     = 144
	 , kind     = Navy
	 , flag     = NL
	 , status   = Moored
	 , position = {latitude = 52.95939, longitude = 4.79615}
	 }
   , { name     = "NATO WARSHIP M111"
	 , size     = 53
	 , kind     = Navy
	 , flag     = UK
	 , status   = Underway
	 , position = {latitude = 52.98099, longitude = 4.76725}
	 }
   , { name     = "HNLMS Schiedam"
	 , size     = 52
	 , kind     = Navy
	 , flag     = NL
	 , status   = Underway
	 , position = {latitude = 52.98308, longitude = 4.57119}
	 }
   , { name     = "MSC Bari"
	 , size     = 366
	 , kind     = Cargo
	 , flag     = LR
	 , status   = Underway
	 , position = {latitude = 52.04863, longitude = 3.56977}
	 }
   , { name     = "Sea empress"
	 , size     = 182
	 , kind     = Tanker
	 , flag     = MT
	 , status   = Underway
	 , position = {latitude = 51.90038, longitude = 3.5334}
	 }
   ]

farms :: [Fa]
farms
 = [ { name     = "Egmond aan Zee"
	 , country  = NL
	 , position = {latitude = 52.606, longitude = 4.419}
	 }
   , { name     = "Prinses Amalia"
	 , country  = NL
	 , position = {latitude = 52.589444, longitude = 4.206281}
	 }
   , { name     = "Gemini"
	 , country  = NL
	 , position = {latitude = 54.036111, longitude = 5.963056}
	 }
   , { name     = "Dudgeon"
	 , country  = UK
	 , position = {latitude = 53.25, longitude = 1.383333}
	 }
   , { name     = "Horns Rev II"
	 , country  = DK
	 , position = {latitude = 55.6, longitude = 7.59}
	 }
   ]
