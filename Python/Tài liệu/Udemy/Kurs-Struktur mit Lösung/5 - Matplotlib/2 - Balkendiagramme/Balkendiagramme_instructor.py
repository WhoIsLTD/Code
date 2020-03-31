#!/usr/bin/env python
# coding: utf-8

# ## Daten visualisieren mit Balkendiagramme

# In[18]:


import numpy as np
import pandas as pd

get_ipython().run_line_magic('matplotlib', 'inline')
import matplotlib
import matplotlib.pyplot as plt


# In[19]:


X = pd.read_csv('autos_stripped.csv', header=0, index_col=0, encoding='ISO-8859-1')
X.head()


# In[20]:


type_of_vehicle = X.vehicleType.value_counts()
type_of_vehicle


# In[21]:


x = np.arange(len(type_of_vehicle.index))
y = type_of_vehicle.values


# In[27]:


plt.bar(x, y, align="center")
plt.xticks(x, type_of_vehicle.index)
plt.ylabel("Anzahl")
plt.show()


# In[33]:


c = ['black', 'red', 'green', 'blue', 'cyan', 'yellow', (0.7, 0.6, 0.3, 1), (0.1, 0.2, 0.7, 1)]


# In[34]:


plt.barh(x, y, align="center", color=c)
plt.yticks(x, type_of_vehicle.index)
plt.xlabel("Anzahl")
plt.show()

