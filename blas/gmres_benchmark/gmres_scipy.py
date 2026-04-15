import numpy as np
from scipy.sparse.linalg import gmres
from scipy.sparse import diags
import time

print("=== SciPy ===\n")
for nn in [100, 500, 1000, 2000, 5000, 10000]:
    h = 1.0 / (nn + 1)
    A = diags([np.full(nn-1,-1.0-0.5*h), np.full(nn,2.0+h), np.full(nn-1,-1.0+0.5*h)], [-1,0,1], format='csr')
    Ad = A.toarray()
    b = Ad @ np.ones(nn)
    iters = [0]
    def cb(pr): iters[0] += 1
    t0 = time.perf_counter()
    x, info = gmres(A, b, x0=np.zeros(nn), rtol=1e-10, restart=30, maxiter=30000, callback=cb, callback_type='pr_norm')
    t1 = time.perf_counter()
    res = np.linalg.norm(b - Ad @ x) / np.linalg.norm(b)
    err = np.linalg.norm(x - 1) / np.sqrt(nn)
    print(f"N={nn:5d}: iters={iters[0]:4d}  residual={res:.2e}  error={err:.2e}  time={t1-t0:.6f} s")
