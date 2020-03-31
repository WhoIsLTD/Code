#!/usr/bin/env python
# coding: utf-8

# ## DataFrames Spaltennamen festlegen

# In[2]:


import pandas as pd


# In[3]:


X = pd.read_csv('autos_full.csv', header=0, encoding='ISO-8859-1')
X.head()


# In[4]:


X.columns


# In[11]:


X.rename({
    'dateCrawled': 'AusgelesenAm',
    'seller': 'Verkäufer'
}, axis='columns', inplace=True)


# In[12]:


X.head()


# In[13]:


X.model


# In[14]:


X['verkauft'] = 1


# In[15]:


X.head()

