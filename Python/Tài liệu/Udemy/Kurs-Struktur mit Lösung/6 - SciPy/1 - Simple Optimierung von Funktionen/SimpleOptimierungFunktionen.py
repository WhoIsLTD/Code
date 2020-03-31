#!/usr/bin/env python
# coding: utf-8

# ## Simple Optimierung von Funktionen

# In[1]:


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

# In[ ]:





# In[ ]:





# In[ ]:





# In[ ]:





# In[2]:


import scipy.optimize as opt


# In[ ]:





# - Finde das minimum von `f(x)` mithilife des Algorithmus BFGS (Broyden–Fletcher–Goldfarb–Shanno). Wir starten bei Punkt `x0 = 0`.

# In[ ]:





# In[ ]:





# In[ ]:





# - was ist aber wenn wir bei `x0 = 6`

# In[3]:


x0 = 6


# In[ ]:





# In[ ]:





# In[ ]:




