#!/usr/bin/env python
# coding: utf-8

# ## Vektoren und Matrizen

# In[30]:


import numpy as np


# #### Fangen wir mit Vektoren an. Wie würden wir diesen Vektor $3\times1$ in NumPy implementieren?
# 
# $\vec x = \begin{pmatrix} 2 \\ 1 \\ 3 \end{pmatrix} $

# In[31]:


x = np.array([2,1,3])


# In[32]:


print(x)


# In[33]:


x + 2


# In[34]:


c = np.array([2,2,2])
x + c


# In[35]:


x * c # Vorsicht KREUZPRODUKT


# In[36]:


x.dot(c) # Skalarprodukt


# #### Wie können wir nun eine $3\times2$ Matrix erstellen?
# 
# ${\displaystyle {A = \begin{bmatrix}1&-1&2\\3&2&0\end{bmatrix}}}$

# In[37]:


A = np.array([[1,-1,2],[3,2,0]])


# In[38]:


print(A)


# In[39]:


A.T


# In[41]:


A * c


# In[42]:


A.dot(c)


# #### Wie greifen wir auf Werte einer Matrix zu ?

# In[43]:


A[0,:]


# In[47]:


A[0, 0:2]


# In[48]:


A[1]

