# Copy, Clear, sort, index, reverse,

# Printing an array using for loop
import array
a= array.array("i", [1,2,3,4])
for i in a:
    print(i)

# Printing a array using while loop
b=0
while b<len(a):
    print(a[b])
    b+=1

# find minimum of the array
temp = a[0]
for i in a:
    if(temp>i):
        temp =i
print("Smallest value of the array is", temp)

# Creation of array in a different format.
class ArrayDemo(object):
    def __init__(self):
        self.numbers = [0] * 2

    def addValue(self, index, data):
        self.numbers[index] = data

    def getValue(self, index):
        return self.numbers[index]


d = ArrayDemo()
d.addValue(0, 1)
d.addValue(1, 2)
print(d.getValue(0))
print(d.getValue(1))
