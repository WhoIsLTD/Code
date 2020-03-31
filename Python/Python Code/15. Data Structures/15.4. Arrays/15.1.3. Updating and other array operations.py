#removal --> Pop and remove
# concatenation -> + operator
#slicing : [], reverse -> ::-1 --> Reversed copy
# how to use loops and membership operator in array

import array as arr
c = arr.array('i',[1,2,3,4,5])
print("C is",c)
#pop and remove
print("Pop",c.pop())
c.pop(3)
print("Remove",c.remove(3))
print("remove",c)

#Concatenation
d=arr.array('i',[3,4,5,6,7])
e= arr.array('i')
e=c+d
print("Concatenation", e)

# Sliciing
print("E from 0 to 3",e[0:3])
print("E from -2 to 0", e[0:-2])
print("Print reverse",e[::-1])

# Loop

for i in e:
    print("values is:",i)

v=0
while v<len(e):
    print("While is:",e[v])
    v+=1