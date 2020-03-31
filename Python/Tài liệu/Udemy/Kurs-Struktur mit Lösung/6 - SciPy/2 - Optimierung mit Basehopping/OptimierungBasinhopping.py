#!/usr/bin/env python
# coding: utf-8

# ## Optimierung mithilfe von Basin-Hopping
# 
# Auffinden des globalen Minimums einer Funktion mit dem Basin-Hopping-Algorithmus
# 
# Basin-Hopping ist ein Zwei-Phasen-Verfahren, das einen globalen Stepping-Algorithmus mit lokaler Minimierung bei jedem Schritt kombiniert. 

# In[1]:


get_ipython().run_line_magic('matplotlib', 'inline')
import matplotlib.pyplot as plt
import numpy as np


# In[2]:


def f(x):
    return x**2 + 10*np.sin(x)


# In[3]:


x = np.linspace(-10, 10, 51)
x


# In[4]:


y = f(x)
y


# ### Wie finden wir nun das globale minimum??

# In[5]:


fig = plt.figure(figsize=(5, 4), dpi=120)
plt.plot(x, y)
plt.grid()
plt.show()


# In[6]:


import scipy.optimize as opt


# In[ ]:





# In[ ]:





# In[ ]:




