#!/usr/bin/env python
# coding: utf-8

# ## Optimierung mithilfe von Curve fitting
# 
# Curve fitting ist ein Verfahren zum Auffinden der am besten passenden Kurve für einen gegebenen Punkte-Set durch Minimieren der Summe der Quadrate der Offsets ("Residuals") der Punkte aus der Kurve.
# 
# <img src="images/curve_fitting_1.png" alt="Curve Fitting 1" style="width: 150px;"/>
# <img src="images/curve_fitting_2.png" alt="Curve Fitting 2" style="width: 150px;"/>
# <img src="images/curve_fitting_3.png" alt="Curve Fitting 3" style="width: 150px;"/>

# In[12]:


get_ipython().run_line_magic('matplotlib', 'inline')
import matplotlib.pyplot as plt
import numpy as np


# In[13]:


def f(x):
    return x**2 + 10*np.sin(x)


# In[14]:


x = np.linspace(-10, 10, 51)
x


# In[15]:


y = f(x)
y


# In[16]:


fig = plt.figure(figsize=(5, 4), dpi=160)
plt.plot(x, y, 'g-')
plt.grid()
plt.show()


# In[17]:


y_noise = f(x) + 5 * np.random.randn(x.size)
y_noise


# In[18]:


fig = plt.figure(figsize=(5, 4), dpi=160)
plt.plot(x, y, 'g-')
plt.plot(x, y_noise, 'r.')
plt.grid()
plt.show()


# - Approximiere die Funktion $f_2(x)=ax^2+b\sin(x)$ indem wir die optimalen Werte für `a` and `b` ermitteln.

# In[19]:


def f2(x, a, b):
    return a * x ** 2 + b * np.sin(x)


# In[20]:


import scipy.optimize as opt


# In[21]:


guess = [2,2] # start werte für a und b
params, cov = opt.curve_fit(f2, x, y_noise, guess)
params


# In[22]:


a = params[0]
b = params[1]
y_fit = f2(x, a, b)
y_fit


# In[26]:


fig = plt.figure(figsize=(5, 4), dpi=160)
plt.plot(x, y, 'g-')
plt.plot(x, y_noise, 'r.')
plt.plot(x, y_fit, 'b.')
plt.grid()
plt.show()


# In[ ]:




