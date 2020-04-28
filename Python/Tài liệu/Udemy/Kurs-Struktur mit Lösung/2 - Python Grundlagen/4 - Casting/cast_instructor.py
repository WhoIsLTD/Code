'''
There may be times when you want to specify a type on to a variable.
This can be done with casting. 
Python is an object-orientated language, and as such it uses 
classes to define data types, including its primitive types.

Casting in python is therefore done using constructor functions:

int() - constructs an integer number from an integer literal, 
a float literal (by rounding down to the previous whole number),
or a string literal (providing the string represents a whole number)

float() - constructs a float number from an integer literal, a float literal or a string literal (providing the string represents a float or an integer)

str() - constructs a string from a wide variety of data types, including strings, integer literals and float literals
'''

# int 
x = int(8) # 8
y = int(2.8) # 2
z = int("42") # 42
print(x)
print(y)
print(z)

# floats
x = float(1)     # x will be 1.0
y = float(2.8)   # y will be 2.8
z = float("3")   # z will be 3.0
w = float("4.2") # w will be 4.2
print(x)
print(y)
print(z)
print(w)

# Strings
x = str("s1") # x will be 's1'
y = str(2)    # y will be '2'
z = str(3.0)  # z will be '3.0'
print(x)
print(y)
print(z)
