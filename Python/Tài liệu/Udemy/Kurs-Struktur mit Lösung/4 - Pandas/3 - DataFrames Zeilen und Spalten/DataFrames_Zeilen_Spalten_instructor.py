#!/usr/bin/env python
# coding: utf-8

# ## DataFrames Zeilen und Spalten

# In[2]:


import pandas as pd


# In[23]:


X = pd.read_csv('autos_full.csv', header=0, encoding='ISO-8859-1')
X.head()


# In[4]:


X[0, 0]


# In[6]:


M = X.values
type(M)


# In[7]:


M[0, 0]


# In[8]:


X[0]


# In[10]:


X['dateCrawled']


# In[11]:


type(X['dateCrawled'])


# In[15]:


X.iloc[0]


# In[17]:


X[['dateCrawled', 'price']]


# In[18]:


X[ X['price'] > 5000]


# In[21]:


X['price'] < 5000

