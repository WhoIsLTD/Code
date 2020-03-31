#!/usr/bin/env python
# coding: utf-8

# ## Daten visualisieren mit Punktdiagramme (X,Y)

# In[5]:


import numpy as np
import pandas as pd

get_ipython().run_line_magic('matplotlib', 'inline')
import matplotlib
import matplotlib.pyplot as plt


# In[6]:


X = pd.read_csv('autos_stripped.csv', header=0, index_col=0, encoding='ISO-8859-1')
X.head()


# In[7]:


number_ps = X.powerPS.value_counts().sort_index()
number_ps


# In[13]:


number_ps = number_ps[ (number_ps > 100) & (number_ps < 1500) ]
number_ps


# In[9]:


x = number_ps.index
y = number_ps.values


# In[12]:


area = y
colors = (30 * y) ** 2
area


# In[11]:


plt.scatter(x, y, s=area, c=colors, alpha=0.5)
plt.xlabel("PS")
plt.ylabel("#Fahrzeuge")
plt.show()

