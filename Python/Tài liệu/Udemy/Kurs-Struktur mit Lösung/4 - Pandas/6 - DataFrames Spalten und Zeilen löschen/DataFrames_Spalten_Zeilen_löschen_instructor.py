#!/usr/bin/env python
# coding: utf-8

# ## DataFrames Spalten und Zeilen löschen

# In[19]:


import pandas as pd


# In[20]:


X = pd.read_csv('autos_full.csv', header=0, encoding='ISO-8859-1')
X.head()


# In[21]:


del_cols = ['dateCrawled','name','offerType', 
            'abtest', 'notRepairedDamage', 'nrOfPictures', 'lastSeen']


# In[22]:


X.drop(del_cols, axis=1, inplace=True) # axis 0 = rows und 1 = spalte


# In[23]:


X.drop('monthOfRegistration', axis=1, inplace=True)
X.head()


# In[24]:


X.to_csv('autos_stripped.csv', sep=',', encoding='utf-8')

