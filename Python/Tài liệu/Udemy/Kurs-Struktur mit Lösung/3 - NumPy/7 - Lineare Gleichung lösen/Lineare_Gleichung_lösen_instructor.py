#!/usr/bin/env python
# coding: utf-8

# ## Lineare Gleichung lösen

# In[1]:


import numpy as np


# #### Folgende Werte sind gegeben
# 
# ${\displaystyle {A = \begin{bmatrix}1&2\\3&4\end{bmatrix}}}$
# 
# $\vec b = \begin{pmatrix} 2 \\ 1 \end{pmatrix} $
# 
# Nun löse die Gleichung $Ax = b$ mit den Numpy funktionen.
# 
# Tipp: $x$ ist folgenderweise lösbar: $\vec x =  A^{-1}\vec b$

# In[2]:


A = np.array([
    [1,2],
    [3,4]
])
A


# In[3]:


b = np.array([2,1])
b


# In[4]:


x = np.linalg.inv(A).dot(b)
x


# In[5]:


np.linalg.solve(A, b)

