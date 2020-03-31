#!/usr/bin/env python
# coding: utf-8

# ## Automatisch Matrizen generieren

# In[17]:


import numpy as np


# #### Wie war es bisher?

# In[18]:


np.array([0, 1, 2])


# #### Wie können wir nun Vektoren und Matrizen generieren?

# In[19]:


Z = np.zeros(10)
Z


# In[20]:


Z = np.zeros((10,10))
Z


# In[21]:


B = np.ones((5, 3))
B


# In[22]:


W = np.random.random((5,1))
W


# #### Wie generieren wir Werte $\geq 0$ und $\leq 0$ ?
# 
# Die Lösung ist mithilfe der Normalverteilung! Gerne mehr hier: https://de.wikipedia.org/wiki/Normalverteilung
# 
# Die Normalverteilung $X \sim \mathcal{N}(\mu,\,\sigma^{2})\,$ hat Standardwerte wie das mean $\mu = 0$ und die Varianz $\sigma^{2} = 1$

# In[23]:


X = np.random.randn(10,5) # kein Tuple mehr!
X


# In[24]:


X.mean()


# In[25]:


X.var()

