'''
There are four collection data types in the Python programming language:

List is a collection which is ordered and changeable. Allows duplicate members.
Tuple is a collection which is ordered and unchangeable. Allows duplicate members.
Set is a collection which is unordered and unindexed. No duplicate members.
Dictionary is a collection which is unordered, changeable and indexed. No duplicate members.

When choosing a collection type, it is useful to understand the properties of that type. 
Choosing the right type for a particular data set could mean retention of meaning, and, it could mean an increase in efficiency or security.
'''

# liste erstellen
a_list = ['Das', 'ist', 'eine', 'liste']
print(a_list)

# Zugriff auf das erste elem
print(a_list[1])

# Element ändern
a_list[2] = 'keine'
print(a_list)

# überprüfen, ob element vorhanden ist
if 'keine' in a_list:
    print("Das ist angeblich keine liste: ", type(a_list))

# länge einer liste
print(a_list)

# elem hinzufügen
a_list.append('joke')
print(a_list)

# elem löschen
a_list.remove('joke')
print(a_list)

# elem löschen
a_list.pop(0)
print(a_list)
a_list.pop()
print(a_list)

# alle elem löschen
a_list.clear()
print(a_list)