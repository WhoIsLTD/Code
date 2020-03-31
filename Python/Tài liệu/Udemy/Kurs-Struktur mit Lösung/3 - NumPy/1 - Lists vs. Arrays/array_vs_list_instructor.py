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

# In[1]:


import numpy as np


# In[4]:


A = [1, 2, 3, 4]


# In[5]:


B = np.array([1, 2, 3, 4])


# In[7]:


for e in A:
    print(e)


# In[8]:


for e in B:
    print(e)


# In[10]:


# Elemente hinzufügen
A.append(5)
print(A)


# In[11]:


B.append(5)


# In[13]:


A = A + [5]
A


# In[14]:


B = B + [5, 6]
B


# In[25]:


A2 = []
for e in A:
    A2.append(e + e)
A2


# In[26]:


A2 * 2


# In[17]:


B + B


# In[19]:


B * B


# In[20]:


B ** B


# In[22]:


np.power(B, 2)


# In[23]:


np.sqrt(B)


# In[24]:


np.log(B)


# In[27]:


np.exp(B)

