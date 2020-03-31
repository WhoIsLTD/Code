#!/usr/bin/env python
# coding: utf-8

# ## Python List vs. NumPy Arrays
# 
# Die Ähnlichkeiten: 
# 
# -   Beide speichern Daten
# -   Beide sind manupulierbar
# -   Beide können indexiert und iteriert werden
# -   Beide können zerteilt werden
# 
# 
# Die Unterschiede: 
# 
# -   Listen können häufig genutzt werden für unterschiedliche Daten Typen
# -   Arrays werden für arithmetische operationen genutzt (selber Datentyp)

# In[2]:


import numpy as np


# In[1]:


A = [1, 2, 3, 4]


# In[3]:


B = np.array([1, 2, 3, 4])


# In[4]:


for e in A:
    print(e)


# In[5]:


for e in B:
    print(e)


# In[7]:


A.append(5)
A


# In[8]:


B.append(5)
B


# In[9]:


A = A + [6]
A


# In[11]:


B = B + [6]
B


# In[12]:


A2 = []
for e in A:
    A2.append(e + e)
A2


# In[19]:


B = np.array([1,2,3,4])


# In[20]:


B


# In[21]:


B + B


# In[22]:


B * B


# In[23]:


B ** B


# In[26]:


np.power(B, 2)


# In[27]:


np.sqrt(B)


# In[28]:


np.log(B)


# In[29]:


np.exp(B)

