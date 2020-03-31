#!/usr/bin/env python
# coding: utf-8

# ## Weitere Matrix operationen

# In[1]:


import numpy as np


# In[ ]:





# #### Berechnen der Inverse
# 
# Die Inverse von $A\in R^{n\times n}$ ist $A^{-1} \in R^{n\times n}$. Die Berechnung der Inverse ist sehr komplex und kann unter folgenden Link nachvollzogen werden.
# https://de.wikipedia.org/wiki/Inverse_Matrix

# In[3]:





# Um zu überprüfen, ob die Inverse korrekt ist, kann folgende Operation durchgeführt werden: $A\cdot A^{-1}=A^{-1}\cdot A=I$

# In[4]:





# In[5]:





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

# In[6]:





# In[7]:





# In[8]:





# #### Andere Operationen 

# In[9]:





# In[10]:





# In[11]:





# In[14]:





# In[15]:




