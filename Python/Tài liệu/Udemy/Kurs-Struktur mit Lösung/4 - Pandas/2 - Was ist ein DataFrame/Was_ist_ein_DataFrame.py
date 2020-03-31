#!/usr/bin/env python
# coding: utf-8

# ## Was ist ein DataFrame?

# In[1]:


import pandas as pd


# In[2]:


X = pd.read_csv('autos_full.csv', encoding='ISO-8859-1')
X.head(10)


# In[ ]:





# ### Info
# 
# Im Allgemeinen könnte man sagen, dass der Pandas DataFrame aus drei Hauptkomponenten besteht: den Daten, dem Index und den Spalten.
# 
# Ein DataFrame kann folgende Daten annehmen:
# 
# - Pandas DatenFrame
# - Pandas-Serie: eine eindimensionale beschriftete Anordnung, die jeden Datentyp mit Achsenbeschriftungen oder Index aufnehmen kann. Ein Beispiel für ein Series-Objekt ist eine Spalte aus einem Datenrahmen.
# - Ein NumPy ndarray, also 1-D oder N-D.
# - Dictionaries von eindimensionalen ndarray's, Listen, Dictionaries oder Serien.
