#%%
import numpy as np 
import matplotlib.pyplot as plt
#%%
# height (cm)
X = np.array([[30, 32.4138, 34.5276, 37.2414, 39.6552]]).T
# weight (kg)
y = np.array([[448.524, 509.248, 535.104, 551.432, 623.418]]).T
# Visualize data 
plt.plot(X, y, 'ro')
plt.axis([25, 42, 430, 640])
plt.xlabel('Dien tich (m2)')
plt.ylabel('Gia ban (trieu VND')
plt.show()
#%%
one = np.ones((X.shape[0], 1))
Xbar = np.concatenate((one, X), axis = 1)

# Calculating weights of the fitting line 
A = np.dot(Xbar.T, Xbar)
b = np.dot(Xbar.T, y)
w = np.dot(np.linalg.pinv(A), b)
print('w = ', w)
# Preparing the fitting line 
w_0 = w[0][0]
w_1 = w[1][0]
x0 = np.linspace(32, 38, 2)
y0 = w_0 + w_1*x0

# Drawing the fitting line 
plt.plot(X.T, y.T, 'ro')     # data 
plt.plot(x0, y0)               # the fitting line
plt.axis([25, 42, 430, 640])
plt.xlabel('Height (cm)')
plt.ylabel('Weight (kg)')
plt.show()
#%%
y1 = w_1*30 + w_0
print(y1)

# %%
