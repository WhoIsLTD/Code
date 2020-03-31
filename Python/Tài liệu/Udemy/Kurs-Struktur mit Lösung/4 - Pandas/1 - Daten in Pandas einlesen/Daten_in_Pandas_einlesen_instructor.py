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

# In[4]:


import numpy as np


# In[23]:


X = []


# In[25]:


f = open('autos_full.csv', encoding='ISO-8859-1')
lines = f.readlines()[1:]

for line in lines:
    values = line.split(',')
    X.append(values)

X


# In[28]:


X = np.array(X)
X


# In[29]:


X.shape

