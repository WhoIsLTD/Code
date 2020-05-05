col=row=5
arr22 = [[1 for i in range(col)]for j in range(row)]
print(arr22)
print("printing in 2D format")
for p in arr22:
    print(p)
arr22[0][1]=0
print("after change in value")
for q in arr22:
    print(q)

#updating all the values
print("Complete update")
for r in range(0,5):
    for s in range(0,5):
        arr22[r][s]=0
print(arr22)

del arr22
print(arr22)



