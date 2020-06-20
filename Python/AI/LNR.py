#%%
import numpy as np 
import matplotlib.pyplot as plt
#%%
# RANGE (KM)
X1 = np.array([[3.2, 3.2, 2.3, 8.8, 1.2, 9.9]]).T
# AREA (POW(m,2))
X2 = np.array([[30, 32.4138, 34.8276, 39.6552, 45.333, 47.321]]).T
# PRICE (MILLION VND)
X3 = np.array([[376.895, 407.323, 482.271, 542.623, 549.214, 646.163]]).T
one = np.ones((X1.shape[0], 1))
#%%
Xbar = np.concatenate((one, X1), axis = 1)
A = np.dot(Xbar.T, Xbar)
b = np.dot(Xbar.T, X3)
w = np.dot(np.linalg.pinv(A), b)
print('w = ', w)
#%%
w_0 = w[0][0]
w_1 = w[1][0]
w_2 = w[2][0]
y1 = w_2*37.2414+w_1*3.4 + w_0
print( 'y1=',y1 )