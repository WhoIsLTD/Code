#!/usr/bin/env python
# coding: utf-8

# ## Daten visualisieren mit Histogramme

# In[1]:


import numpy as np
import pandas as pd

get_ipython().run_line_magic('matplotlib', 'inline')
import matplotlib
import matplotlib.pyplot as plt


# In[2]:


X = pd.read_csv('autos_stripped.csv', header=0, index_col=0, encoding='ISO-8859-1')
X.head()


# In[3]:


prices = X.price.sort_values()
prices = prices[(prices > 10000) & (prices < 50000)]
prices


# In[4]:


x = prices.values


# In[5]:


plt.hist(x, bins=20, color = 'blue', edgecolor = 'black')
plt.xlabel("Preis")
plt.ylabel("Fahrzeuge")
plt.show()


# In[6]:


B = int((prices.min()+prices.max()) / 1000)
B


# In[7]:


import scipy.stats as stats


# In[8]:


x_mean = np.mean(x)
x_std = np.std(x)
pdf = stats.norm.pdf(x, x_mean, x_std)


# In[10]:


plt.hist(x, density=True, bins=B, color = 'blue', edgecolor = 'black')
plt.plot(x, pdf, 'r', linewidth=3)
plt.xlabel("Preis")
plt.ylabel("Fahrzeuge (Norm)")
plt.show()

