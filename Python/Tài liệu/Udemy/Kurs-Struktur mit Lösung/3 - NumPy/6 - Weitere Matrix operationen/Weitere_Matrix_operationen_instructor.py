#!/usr/bin/env python
# coding: utf-8

# ## Weitere Matrix operationen

# In[2]:


import numpy as np


# In[3]:


A = np.array([
    [2, 5],
    [1, 3]
])


# #### Berechnen der Inverse
# 
# Die Inverse von $A\in R^{n\times n}$ ist $A^{-1} \in R^{n\times n}$. Die Berechnung der Inverse ist sehr komplex und kann unter folgenden Link nachvollzogen werden.
# https://de.wikipedia.org/wiki/Inverse_Matrix

# In[4]:


A_inv = np.linalg.inv(A)
A_inv


# Um zu überprüfen, ob die Inverse korrekt ist, kann folgende Operation durchgeführt werden: $A\cdot A^{-1}=A^{-1}\cdot A=I$

# In[5]:


A.dot(A_inv)


# In[6]:


A_inv.dot(A)


# #### Berechnung der Determinante
# 
# Die $0 \times 0$-Matrix hat die Determinante 1.
# 
# Für eine nur aus einem Koeffizienten bestehende $1 \times 1$-Matrix $A$ ist: $\det A = \det \begin{pmatrix}
#  a_{11}
#  \end{pmatrix} = a_{11}.$
# 
# Ist $A$ eine $2 \times 2$-Matrix, dann ist: 
# $\det A=\det
#  \begin{pmatrix}
#  a_{11} & a_{12} \\
#  a_{21} & a_{22}
#  \end{pmatrix}
# = a_{11} a_{22} - a_{12} a_{21}.$
# 
# Für eine $3 \times 3$-Matrix $A$ gilt die Formel: 
# $\begin{align}
# \det A &= \det
#  \begin{pmatrix}
#  a_{11} & a_{12} & a_{13} \\
#  a_{21} & a_{22} & a_{23} \\
#  a_{31} & a_{32} & a_{33}
#  \end{pmatrix}
# \\ &= a_{11} a_{22} a_{33} +a_{12} a_{23} a_{31} + a_{13} a_{21} a_{32} - a_{13} a_{22} a_{31} - a_{12} a_{21} a_{33} - a_{11} a_{23} a_{32}.
# \end{align}$

# In[7]:


np.linalg.det([[1]])


# In[8]:


np.linalg.det([
    [1, 2],
    [3, 4]
])


# In[9]:


np.linalg.det([
    [1, 2, 3],
    [3, 2, 1],
    [2, 1, 3]
])


# #### Andere Operationen 

# In[10]:


A = np.array([
    [2, 5],
    [1, 3]
])


# In[11]:


np.diag(A)


# In[12]:


np.diag([2, 3])


# In[13]:


np.diag(A).sum()


# In[14]:


np.trace(A)

