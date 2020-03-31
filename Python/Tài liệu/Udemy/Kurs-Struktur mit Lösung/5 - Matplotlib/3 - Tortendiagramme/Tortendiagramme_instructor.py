#!/usr/bin/env python
# coding: utf-8

# ## Daten visualisieren mit Tortendiagramme

# In[62]:


import numpy as np
import pandas as pd

get_ipython().run_line_magic('matplotlib', 'inline')
import matplotlib
import matplotlib.pyplot as plt


# In[63]:


X = pd.read_csv('autos_stripped.csv', header=0, index_col=0, encoding='ISO-8859-1')
X.head()


# In[64]:


brands_norm = X.brand.value_counts(normalize=True).sort_values(ascending=False)
brands_norm


# In[65]:


labels = brands_norm.index
sizes = brands_norm.values


# In[66]:


expl = np.zeros(brands_norm.count())
expl


# In[67]:


expl[3] = 0.2


# In[68]:


plt.pie(sizes, explode=expl, pctdistance=0.85, autopct='%1.1f%%', shadow=True, startangle=90)
plt.legend(labels, loc="center right", bbox_to_anchor=(1, 0, 0.5, 1))
plt.axis('equal')
plt.show()

