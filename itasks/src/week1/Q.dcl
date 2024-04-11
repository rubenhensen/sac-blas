definition module Q
import StdOverloaded

:: Q
  = {n :: !Int, d :: !Int}


norm :: !Q -> Q


instance == Q
instance < Q
instance zero Q
instance one Q
instance + Q
instance - Q
instance * Q
instance / Q
instance + (?Q)
instance - (?Q)
instance * (?Q)
instance / (?Q)
instance abs Q
instance toReal Q
instance toString Q

class toQ a
  where toQ :: a -> Q

instance toQ (Int, Int)
instance toQ (Int, Int, Int)
instance toQ Real
instance toQ Int
