# Accessing elements --> Types of accessing: Positive and negative
# Mutable, #Length # adding an element -> insert,extend,append

import array as arr
c = arr.array('i',[1,2,3,4,5])
print("positive accessing",c[1])
print("Negative accessing",c[-1])

#Mutable
c[2]=9
print("Mutable",c[2])

#length
print("length",len(c))

# Adding elements
c.append(6)
print("append",c)
c.extend([7,8])
print("Extend",c)
c.insert(3,20)
print("Insert",c)