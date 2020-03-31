#!/usr/bin/env python
# coding: utf-8

# ## For Loop vs. Skalarprodukt Speedtest

# In[2]:


import numpy as np
import time


# In[3]:


# Helper Klasse
class Timer(object):
    """
    Record timing information.
    """
    def __init__(self, *steps):
        self._time_per_step = dict.fromkeys(steps)

    def __getitem__(self, item):
        return self.time_per_step[item]

    @property
    def time_per_step(self):
        return {
            step: elapsed_time
            for step, elapsed_time in self._time_per_step.items()
            if elapsed_time is not None and elapsed_time > 0
        }

    def start_for(self, step):
        self._time_per_step[step] = -time.time()

    def stop_for(self, step):
        self._time_per_step[step] += time.time()


# In[4]:


A = np.array([1, 2])
A


# In[5]:


B = np.array([2, 1])
B


# In[6]:


dot = 0
for i, j in zip(A, B):
    dot += i * j
dot


# In[8]:


A * A


# In[9]:


np.sum(A * B)


# In[10]:


np.dot(A, B)


# In[11]:


A.dot(B)


# ### Speedtest

# In[12]:


main_timer = Timer('loop', 'numpy')


# In[13]:


A = np.random.randn(100)
B = np.random.randn(100)
T = 1000
A


# In[20]:


def python_dot(A, B):
    dot = 0
    for i, j in zip(A, B):
        dot += i * j
    return dot


# In[21]:


main_timer.start_for('loop')
for _ in range(T):
    python_dot(A, B)
main_timer.stop_for('loop')


# In[22]:


main_timer.start_for('numpy')
for _ in range(T):
    A.dot(B)
main_timer.stop_for('numpy')


# In[23]:


print("Numpy ist schneller um ", (main_timer['loop'] / main_timer['numpy']))


# In[ ]:




