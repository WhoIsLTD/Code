#!/usr/bin/env python
# coding: utf-8

# ## Simple Optimierung von Funktionen

# In[74]:


get_ipython().run_line_magic('matplotlib', 'inline')
import matplotlib.pyplot as plt
import numpy as np


# Die Berechnung des globalen Maximums bzw. Minimums liefert uns eine Aussage über den Wertebereich einer Funktion
# 
# $ f\colon U\to\mathbb R $
# 
# auf ihrem Definitionsbereich $ D$. Dabei wird die größte untere und kleinste obere Schranke unserer Funktion berechnet (auch Supremum bzw. Infimum genannt).
# 
# Besonders interessant ist das bei der Beantwortung der Frage, ob eine Funktion beschränkt ist, d.h. ob der Wertebereich bestimmte Grenzen nicht über- oder unterschreitet.

# ### Kein Sorge!
# Wir schauen uns nun an wie wir das mithilfe von SciPy lösen können!
# 
# - Lass uns erstmal diese Funktion definieren: $f(x) = x^2+10\sin(x)$

# In[75]:


def f(x):
    return x**2 + 10*np.sin(x)


# In[76]:


x = np.linspace(-10, 10, 51)
x


# In[77]:


y = f(x)
y


# In[78]:


fig = plt.figure(figsize=(5, 4), dpi=80)
plt.plot(x, y)
plt.grid()
plt.show()


# In[79]:


import scipy.optimize as opt


# In[80]:


x0 = 0


# - Finde das minimum von `f(x)` mithilife des Algorithmus BFGS (Broyden–Fletcher–Goldfarb–Shanno). Wir starten bei Punkt `x0 = 0`.

# In[91]:


[xopt, fopt, gopt, Bopt, func_calls, grad_calls, warnflg] = opt.fmin_bfgs(f, x0=x0, maxiter=2000, full_output=True)


# In[82]:


xopt, fopt, f(x0)


# In[83]:


fig = plt.figure(figsize=(5, 4), dpi=80)
plt.plot(x, y)
plt.plot([x0, xopt], [f(x0), fopt], 'o')
plt.grid()
plt.show()


# - was ist aber wenn wir bei `x0 = 6`

# In[84]:


x0 = 6


# In[85]:


[xopt, fopt, gopt, Bopt, func_calls, grad_calls, warnflg] = opt.fmin_bfgs(f,  # Objective function to be minimized.
                                                                          x0=x0,
                                                                          maxiter=2000,
                                                                          full_output=True)


# In[86]:


xopt, fopt


# In[87]:


fig = plt.figure(figsize=(5, 4), dpi=80)
plt.plot(x, y)
plt.plot([x0, xopt], [f(x0), fopt], 'o')
plt.grid()
plt.show()

