
#Creation of 1D array
n=5
arr = [1]*n
print(arr)

#Basic creation of 2D matrix by using values
print("Basic")
a = [[1, 2, 3], [4, 5, 6]]
print(a)

#Creation of 2D array
print("Method2")
col=row=5
arr2= [[1]*col]*row
print(arr2)

#Creation of 2D array other method
print("Method 3")
arr22= [[0 for i in range(col)]for j in range(row)]
print(arr22)
