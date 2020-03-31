#!/usr/bin/env python
# coding: utf-8

# ## Änderungen durchführen DF.Apply()

# In[11]:


import pandas as pd


# In[12]:


X = pd.read_csv('autos_full.csv', header=0, encoding='ISO-8859-1')
X.head()


# #### Die DF.Apply() Funktion
# 
# Pandas.apply erlaubt es den Nutzern, eine Funktion zu übergeben und sie auf jeden einzelnen Wert der Pandas-Serie anzuwenden. Damit können Änderungen sehr performant durchgeführt werden, weshalb es effizient in den Bereichen Data Science und maschinelles Lernen eingesetzt werden.
# 
# Syntax:
# 
# ```python
# DF.apply(func, convert_dtype=True, args=())
# ```

# In[13]:


X['Verkauft'] = 1
X.head()


# In[14]:


def setup_seller(row):
    if row.price <= 3000 and row.notRepairedDamage == 'ja':
        return 0
    elif row.price >= 3000 and row.notRepairedDamage == 'nein':
        return 1
    else:
        return 0


# In[15]:


X['Verkauft'] = X.apply(setup_seller, axis=1)


# In[17]:


X.head(20)

