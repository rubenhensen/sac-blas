implementation module Q
import StdEnv

:: Q
  = {n :: !Int, d :: !Int}

instance zero Q
    where zero = {n = 0, d = 1}

instance one Q
    where one = {n = 1, d = 1}

instance == Q
    where (==) x y = (norm x).n == (norm y).n && (norm x).d == (norm y).d


instance < Q
    where (<) x y = x.n * y.d < y.n * x.d

instance + Q
    where (+) x y = norm {n = x.n*y.d + y.n*x.d, d = x.d*y.d}

instance - Q
    where (-) x y = norm {n = x.n*y.d - y.n*x.d, d = x.d*y.d}

instance * Q
    where (*) x y = norm {n = x.n*y.n, d = x.d*y.d}

instance / Q
    where (/) x y = x * {n = y.d, d = y.n}


instance + (?Q)
    where (+) nx ny = case (nx,ny) of
                        (?None,_) = ?None
                        (_,?None) = ?None
                        (?Just x, ?Just y) = ?Just (x + y)

instance - (?Q)
    where (-) nx ny = case (nx,ny) of
                        (?None,_) = ?None
                        (_,?None) = ?None
                        (?Just x, ?Just y) = ?Just (x - y)

instance * (?Q)
    where (*) nx ny = case (nx,ny) of
                        (?None,_) = ?None
                        (_,?None) = ?None
                        (?Just x, ?Just y) = ?Just (x * y)

instance / (?Q)
    where (/) nx ny = case (nx,ny) of
                        (?None,_) = ?None
                        (_,?None) = ?None
                        (?Just x, ?Just y) = ?Just (x / y)


instance abs Q
    where abs x  = {n = abs x.n, d = abs x.d}

instance ~ Q
    where ~ x  = {n = ~x.n, d = x.d}

instance sign Q
    where sign {n,d}
          | n == 0 = 0
          | n < 0 && d < 0 = 1
          | n > 0 && d > 0 = 1
          | n < 0 && d > 0 = -1
          | n > 0 && d < 0 = -1

instance toReal Q
    where toReal {n,d} = toReal n / toReal d

class toQ a
    where toQ :: a -> Q

instance toQ Real
    where toQ x = norm {n = toInt (x * 100.0), d = 100}

instance toQ Int
    where toQ x = {n = x, d = 1}

instance toQ (Int, Int)
    where toQ (n, d) = norm {n = n, d = d}

instance toQ (Int, Int, Int)
    where toQ (x, n, d) = norm {n = x*d + n, d = d}

instance toString Q
    where toString {n,d}
          | n / d == 0 && n rem d == 0  = "0"
          | n / d == 0                  = toString n +++ {'/'} +++ toString d
          | n rem d == 0                = toString (n/d)
          | otherwise                   = toString (n/d) +++ {'('} +++ toString (n-(n/d)*d) +++ {'/'} +++ toString d +++ {')'}

norm :: !Q -> Q
norm {n,d} = {n = n/x, d = d/x}
    where x = gcd n d

