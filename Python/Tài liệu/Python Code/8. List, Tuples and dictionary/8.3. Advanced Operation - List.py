# Iteration # membership

# Advanced Operation- Methods
# list.append(obj) - Appends object obj to list
# list.count(obj) - Returns count of how many times obj occurs in list
# list.extend(seq) -Appends the contents of seq to list
# list.index(obj) - Returns the lowest index in list that obj appears
# list.insert(index, obj) - Inserts object obj into list at offset index
# list.pop(obj=list[-1]) - Removes and returns last object or obj from list
# list.remove(obj) - Removes object obj from list
# list.reverse() - Reverses objects of list in place
# list.sort([func]) - Sorts objects of list, use compare func if given

a =[1,2,3,4,5,1]

for i in [1,2,3]:
    print(i)

if 1 in a:
    print('Valid case')

print(a.count(1))
print(a.index(2))
print(a.reverse())
print(a)
print(a.sort())
print(a)
