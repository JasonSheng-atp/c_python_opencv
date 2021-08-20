import sys
import time
import numpy as np
sys.path.append('build')	
from jasonnb import mat_max
array1 = np.array(
    [[[1,2,3],[4,5,6]],[[7,8,9],[10,11,12]]]
).astype(np.float32)
t1 = time.time()
max_ = mat_max(array1)
print(time.time()-t1)
print(max_)

t1 = time.time()
max__ = np.max(array1)
print(time.time()-t1)
print(max__)