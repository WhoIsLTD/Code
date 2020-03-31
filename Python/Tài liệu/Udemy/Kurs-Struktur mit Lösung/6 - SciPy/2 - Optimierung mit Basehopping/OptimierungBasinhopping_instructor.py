#!/usr/bin/env python
# coding: utf-8

# ## Optimierung mithilfe von Basin-Hopping
# 
# Auffinden des globalen Minimums einer Funktion mit dem Basin-Hopping-Algorithmus
# 
# Basin-Hopping ist ein Zwei-Phasen-Verfahren, das einen globalen Stepping-Algorithmus mit lokaler Minimierung bei jedem Schritt kombiniert. 

# In[30]:


get_ipython().run_line_magic('matplotlib', 'inline')
import matplotlib.pyplot as plt
import numpy as np


# In[31]:


def f(x):
    return x**2 + 10*np.sin(x)


# In[32]:


x = np.linspace(-10, 10, 51)
x


# In[33]:


y = f(x)
y


# ### Wie finden wir nun das globale minimum??

# In[34]:


fig = plt.figure(figsize=(5, 4), dpi=80)
plt.plot(x, y)
plt.grid()
plt.show()


# In[35]:


import scipy.optimize as opt


# In[36]:


x0 = 6


# In[37]:


res = opt.basinhopping(f, 
                     x0=6, 
                     T=1,  # The “temperature” parameter
                     stepsize=2)  # Initial step size
res


# In[38]:


fig = plt.figure(figsize=(5, 4), dpi=80)
plt.plot(x, y)
plt.plot([x0, res.x], [f(x0), res.fun], 'o')
plt.grid()
plt.show()

