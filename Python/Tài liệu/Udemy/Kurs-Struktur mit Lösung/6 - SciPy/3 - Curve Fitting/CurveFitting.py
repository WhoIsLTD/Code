#!/usr/bin/env python
# coding: utf-8

# ## Optimierung mithilfe von Curve fitting
# 
# Curve fitting ist ein Verfahren zum Auffinden der am besten passenden Kurve für einen gegebenen Punkte-Set durch Minimieren der Summe der Quadrate der Offsets ("Residuals") der Punkte aus der Kurve.
# 
# <img src="images/curve_fitting_1.png" alt="Curve Fitting 1" style="width: 250px;"/>
# <img src="images/curve_fitting_2.png" alt="Curve Fitting 2" style="width: 250px;"/>
# <img src="images/curve_fitting_3.png" alt="Curve Fitting 3" style="width: 250px;"/>

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


# In[5]:


fig = plt.figure(figsize=(5, 4), dpi=120)
plt.plot(x, y, 'g-')
plt.grid()
plt.show()


# In[ ]:





# In[ ]:





# - Approximiere die Funktion $f_2(x)=ax^2+b\sin(x)$ indem wir die optimalen Werte für `a` and `b` ermitteln.

# In[ ]:





# In[6]:


import scipy.optimize as opt


# In[ ]:





# In[ ]:





# In[ ]:




