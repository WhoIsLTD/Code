#A C integer is essentially a label for a position in memory whose bytes encode an integer value.
#A Python integer is a pointer to a position in memory containing all the Python object information,
#including the bytes that contain the integer value.
#This extra information in the Python integer structure is what allows Python to be coded so freely and dynamically.

#Python has five standard data types-
#Numbers, String, List, Tuple, Dictionary

a = (1,2,2,3,4)
print(a)

#Dictionary:
dict = {}
dict[1] = "This is One"
dict['Two'] = "This is two"
iddict = {'name': 'Smith'}
print(dict['Two'])
print(dict[1])
print(iddict.keys())
print(iddict.values())
print(iddict.items())
print(iddict)
