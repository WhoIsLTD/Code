#!/usr/bin/env python
# coding: utf-8

# ## Vektoren und Matrizen

# In[1]:


import numpy as np


# #### Fangen wir mit Vektoren an. Wie würden wir diesen Vektor $3\times1$ in NumPy implementieren?
# 
# $\vec x = \begin{pmatrix} 2 \\ 1 \\ 3 \end{pmatrix} $

# In[2]:


x = np.array([2, 1, 3])
x


# In[3]:


x + 2


# In[4]:


c = np.array([2, 2, 2])


# In[5]:


x + c


# In[6]:


x * c


# In[7]:


x.dot(c)


# #### Wie können wir nun eine $3\times2$ Matrix erstellen?
# 
# ${\displaystyle {A = \begin{bmatrix}1&-1&2\\3&2&0\end{bmatrix}}}$

# In[8]:


A = np.array([
    [1, -1, 2],
    [3, 2, 0]
])
A


# In[9]:


A.T


# In[10]:


A * c


# In[11]:


A.dot(c)


# In[ ]:





# #### Wie greifen wir auf Werte einer Matrix zu ?

# In[13]:


A


# In[14]:


A[0, :]


# In[15]:


A[0, 0:2]


# In[16]:


A[1]

