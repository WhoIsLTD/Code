#!/usr/bin/env python
# coding: utf-8

# ## Daten einlesen
# 
# Wir haben Daten in einer CSV Datei über Autos die in Ebay verkauft wurden. In den folgenden Lektionen werden wir mit folgendem Dataset arbeiten und weiter untersuchen!
# 
# Folgende Daten sind enthalten:
# 
# 
# - dateCrawled : when this ad was first crawled, all field-values are taken from this date
# - name : "name" of the car
# - seller : private or dealer
# - offerType
# - price : the price on the ad to sell the car
# - abtest
# - vehicleType
# - yearOfRegistration : at which year the car was first registered
# - gearbox
# - powerPS : power of the car in PS
# - model
# - kilometer : how many kilometers the car has driven
# - monthOfRegistration : at which month the car was first registered
# - fuelType
# - brand
# - notRepairedDamage : if the car has a damage which is not repaired yet
# - dateCreated : the date for which the ad at ebay was created
# - nrOfPictures : number of pictures in the ad 
# - postalCode
# - lastSeenOnline : when the crawler saw this ad last online

# In[1]:


import numpy as np


# In[2]:


X = []


# In[3]:


f = open('autos_full.csv', encoding='ISO-8859-1')
lines = f.readlines()[1:]

for line in lines:
    values = line.split(',')
    X.append(values)

X


# In[4]:


X = np.array(X)
X


# In[5]:


X.shape


# ### Wie können wir nun Daten einlesen mit Panda?

# In[6]:


import pandas as pd


# In[ ]:





# In[ ]:





# In[ ]:




