#!/usr/bin/env python
# coding: utf-8

# ## Bilder visualisieren in matplotlib

# In[16]:


import numpy as np
get_ipython().run_line_magic('matplotlib', 'inline')
import matplotlib
import matplotlib.pyplot as plt


# In[17]:


x = plt.imread("cat.1.jpg")
x


# In[18]:


plt.imshow(x)


# In[19]:


rows, columns = 2, 2


# In[20]:


fig = plt.figure(figsize=(8, 8))
for i in range(1, columns * rows + 1):
    fig.add_subplot(rows, columns, i)
    x = plt.imread("cat."+str(i)+".jpg")
    plt.imshow(x)
plt.show()

