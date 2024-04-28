module ships2
import StdEnv
from Math.Geometry import pi

Start = eval (E3)

// Why can't I add spaces between E0, E1, ... like we did in LetExpr?
E0 = Ship "s" (Return (SelectName (Var "s")))
E1 = Ship "s" (Cond (HasFlag (Var "s") [NL,UK]) (Return (SelectName (Var "s"))))
E2 = Farm "w" (Ship "s" (Cond (Le (Distance (Var "s") (Var "w")) (Real 10.0)) (Return (SelectName (Var "w")))))
E3 = Port "p" (Ship "s" (Cond (Le (Distance (Var "s") (Var "p")) (Real 0.50)) (Return (SelectName (Var "p")))))

:: Gen
  = Ship String Gen
  | Farm String Gen
  | Port String Gen
  | Cond Cond Gen
  | Return Expr

:: Cond
  = Le Expr Expr
  | Eq Expr Expr
  | Not Cond
  | And Cond Cond
  | HasFlag Expr [Country]
  | HasName Expr [String]
  | HasKind Expr [Kind]

:: Expr
  = Var String
  | Real Real
  | SelectName Expr
  | Add Expr Expr
  | Distance Expr Expr

:: State :== String -> Val

:: Val
  = Sh Sh
  | Fa Fa
  | Po Po
  | I Int
  | R Real
  | B Bool
  | S String
  | E String

emptyState :: State
emptyState = \x -> E "Empty state"

(|->) infix :: String Val -> State -> State
(|->) v x = \s y -> if (y == v) x (s y)

// :: Var :== String

eval :: Gen -> [Val]
eval gen = evalGen gen emptyState

evalGen :: Gen State -> [Val]
evalGen (Ship v gen) s = flatten [evalGen gen ((v |-> x) s) \\ x <- ships]
evalGen (Farm v gen) s = flatten [evalGen gen ((v |-> (Fa x)) s) \\ x <- farms]
evalGen (Port v gen) s = flatten [evalGen gen ((v |-> (Po x)) s) \\ x <- ports]
evalGen (Cond c gen) s = case evalCond c s of
							[True] = evalGen gen s
							otherwise = []
evalGen (Return e) s   = [evalExpr e s]


evalCond :: Cond State -> [Bool]
evalCond (Le e1 e2) s 		= case (evalExpr e1 s, evalExpr e2 s) of
								(R b1, R b2) = [b1 <= b2]
								otherwise 	= []
evalCond (Eq e1 e2) s 		= case (evalExpr e1 s, evalExpr e2 s) of
								(R r1, R r2) = [r1 == r2]
								(S r1, S r2) = [r1 == r2]
								(B r1, B r2) = [r1 == r2]
								otherwise 	= []
evalCond (Not c) s 			= case (evalCond c s) of
								[b] = [not b]
								otherwise 	= []
evalCond (And c1 c2) s 		= case (evalCond c1 s, evalCond c2 s) of
								([b1], [b2]) = [b1 && b2]
								otherwise 	= []
evalCond (HasFlag e cs) s 	= case evalExpr e s of
								(Sh x) 		= if (isMember x.Sh.flag cs) [True] []
								(Fa x)		= if (isMember x.Fa.country cs) [True] []
								otherwise 	= []
evalCond (HasName e ns) s 	= case evalExpr e s of
								(Sh x) 		= if (isMember x.Sh.name ns) [True] []
								(Fa x)		= if (isMember x.Fa.name ns) [True] []
								(Po x)		= if (isMember x.Po.name ns) [True] []
								otherwise 	= []
evalCond (HasKind e ks) s 	= case evalExpr e s of
								(Sh x) 		= if (isMember x.kind ks) [True] []
								otherwise 	= []

evalExpr :: Expr State -> Val
evalExpr (Var v) s 			= s v
evalExpr (Real r) _ 		= R r
evalExpr (SelectName e) s 	= case evalExpr e s of
								(Sh s) = S s.Sh.name
								(Fa s) = S s.Fa.name
								(Po s) = S s.Po.name
								otherwise 		= E "Type error Selectname"
evalExpr (Add e1 e2) s 		= case (evalExpr e1 s, evalExpr e2 s) of
								(R r1, R r2) 	= R (r1 + r2)
								otherwise 		= E "Type error add"
evalExpr (Distance e1 e2) s = case (evalExpr e1 s, evalExpr e2 s) of
								(Sh s1, Sh s2) 	= R (distance s1.Sh.position s2.Sh.position)
								(Sh s1, Fa s2) 	= R (distance s1.Sh.position s2.Fa.position)
								(Sh s1, Po s2) 	= R (distance s1.Sh.position s2.Po.position)
								(Fa s1, Sh s2) 	= R (distance s1.Fa.position s2.Sh.position)
								(Fa s1, Fa s2) 	= R (distance s1.Fa.position s2.Fa.position)
								(Fa s1, Po s2) 	= R (distance s1.Fa.position s2.Po.position)
								(Po s1, Sh s2) 	= R (distance s1.Po.position s2.Sh.position)
								(Po s1, Fa s2) 	= R (distance s1.Po.position s2.Fa.position)
								(Po s1, Po s2) 	= R (distance s1.Po.position s2.Po.position)
								otherwise 		= E "Type error distance"

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
instance toPosition Fa        where toPosition w = w.Fa.position
instance toPosition Po        where toPosition p = p.Po.position

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
