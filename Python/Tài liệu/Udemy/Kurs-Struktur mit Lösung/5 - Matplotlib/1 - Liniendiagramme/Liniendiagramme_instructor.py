#!/usr/bin/env python
# coding: utf-8

# ## Daten visualisieren mit Liniendiagramme

# In[91]:


import numpy as np
import pandas as pd

get_ipython().run_line_magic('matplotlib', 'inline')
import matplotlib
import matplotlib.pyplot as plt


# In[92]:


X = pd.read_csv('autos_stripped.csv', header=0, index_col=0, encoding='ISO-8859-1')
X.head()


# In[93]:


x = np.arange(-8, 8, 0.1)


# In[94]:


y = np.sin(x)


# In[95]:


plt.plot(x, y)


# In[96]:


z = np.cos(x)
plt.plot(x, y)
plt.plot(x, z)
plt.show()


# In[97]:


numberOfRows = X['yearOfRegistration'].value_counts().sort_index()
numberOfRows


# In[98]:


numberOfRows = numberOfRows[numberOfRows > 100]
numberOfRows


# In[99]:


x = numberOfRows.index.values
y = numberOfRows.values


# In[100]:


plt.plot(x, y)
plt.xlabel("Year")
plt.ylabel("Registration")
plt.show()

