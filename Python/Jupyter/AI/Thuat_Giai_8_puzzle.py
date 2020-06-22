#!/usr/bin/env python
# coding: utf-8

# In[7]:


#
import copy
class state:
#ham khoi tao doi tuong
    def __init__(self, data = None, par = None, g = 0, h = 0, op = None):
        self.data = data
        self.par = par
        self.op = op
        self.g = g
        self.h = h
#ham in 
    def Print(self):
        size = 3
        for i in range(size):
            for j in range(size):
                print(self.data[i * size + j],end = ' ')
            print()
        print()
#
    def clone(self) :
        sn = copy.deepcopy(self)
        return sn
#ham in ra day kq(123456780)
    def Key(self):
        if self.data == None:
            return None
        res = ''
        for x in self.data:
            res += (str)(x)
        return res
#
    def __lt__(self,other):
        if other == None:
            return False
        return self.g + self.h < other.g + other.h
#
    def __eq_(self,other):
        if other == None:
            return False
        return self.Key() == other.Key()


# In[8]:


class operator:
    def __init__(self,i):
        self.i = i
# kt o trong hay k
    def CheckStateNull(self,s):
        return s.data == None
# tim vi tri o trong
    def findPos(self,s):
        size = 3
        for i in range(size):
            for j in range(size):
                if s.data[i * size + j] == 0:
                    return i,j
        return None
# doi vi tri
    def swap(self,s,x,y,i):
        size = 3
        sn = s.clone()
        x_new = x
        y_new = y
        # chuyen len xuong
        if i == 0:
            x_new = x + 1
            y_new = y
        if i == 1:
            x_new = x - 1 
            y_new = y
        # chuyen sang trai phai
        if i == 2:
            x_new = x
            y_new = y + 1
        if i == 3:
            x_new = x
            y_new = y-1
        sn.data[x * size + y] = sn.data[x_new * size + y_new]
        sn.data[x_new * size + y_new] = 0
        return sn
#
    def up(self,s):
        if self.CheckStateNull(s):
            return None
        x,y = self.findPos(s)
        if x == 2:
            return None
        return self.swap(s,x,y,self.i)
#
    def down(self,s):
        if self.CheckStateNull(s):
            return None
        x,y = self.findPos(s)
        if x == 0:
            return None
        return self.swap(s,x,y,self.i)
#
    def left(self,s):
        if self.CheckStateNull(s):
            return None
        x,y = self.findPos(s)
        if y == 2:
            return None
        return self.swap(s,x,y,self.i)
#
    def right(self,s):
        if self.CheckStateNull(s):
            return None
        x,y = self.findPos(s)
        if y == 0:
            return None
        return self.swap(s,x,y,self.i)
#
    def move(self,s):
        if self.i == 0:
            return self.up(s)
        if self.i == 1:
            return self.down(s)
        if self.i == 2:
            return self.left(s)
        if self.i == 3:
            return self.right(s)
        return None


# In[9]:


# 1 so ham ho tro
def CheckInPriority(Open,tmp):
    if tmp == None:
        return False
    return ( tmp in Open.queue)
def Equal(O,G):
    if O == None:
        return False
    return O.Key() == G.Key()
# kt cha co trong k
def Path(O):
    if O.par != None:
        Path(O.par)
        if O.op.i == 0:
            print('Chuyen xuong : ')
        if O.op.i == 1:
            print('Chuyen len : ')
        if O.op.i == 2:
            print('Chuyen qua phai : ')
        if O.op.i == 3:
            print('Chuyen qua trai : ')
    O.Print()
def Hx(S,G):
    size = 3
    res = 0
    for i in range(size):
        for j in range(size):
            if S.data[i * size + j] != G.data[i * size + j]:
                res += 1
    return res


# In[10]:


#
from queue import PriorityQueue
def Run():
    Open = PriorityQueue()
    Close = PriorityQueue()
    S.g = 0
    S.h = Hx(S,G)
    Open.put(S)
    
    while True:
        if Open.empty() == True:
            print('Tim kiem that bai')
            return
        O = Open.get()
        Close.put(O)
        if Equal(O,G) == True:
            print('8_puzzle ngau nhien khac 8_puzzle dich den .')
            Path(O)
            break
# cac trang thai con
        for i in range(4):
            op = operator(i)
            child = op.move(O)
            if child == None:
                continue
            ok1 = CheckInPriority(Open,child)
            ok2= CheckInPriority(Close,child)
            if not ok1 and not ok2:
                child.par = O
                child.op = op
                child.g = O.g+1
                child.h = Hx(child,G)
                Open.put(child)
        #


# In[12]:


from random import randint
from queue import PriorityQueue
def init(num):
    G = state()
    size = 3
    G.data = []
    for i in range(size):
        for j in range(size):
            G.data.append((i * size + j + 1) % 9)
            
    S = G.clone()
    for i in range(num):
        op = operator(randint(0,3))
        tmp = op.move(S)
        if tmp != None:
            S = tmp
    return S,G
# RUN
S,G = init(50)
print("8_puzzle ngau nhien (mac dinh o trong = 0) : ")
S.Print()
print("8_puzzle dich den : ")
G.Print()
Run()


# In[ ]:




