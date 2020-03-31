'''
A set is a collection which is unordered and unindexed. In Python sets 
are written with curly brackets.

Note: Sets are unordered, so the items will appear in a random order.
'''

# Tuples erstellen
a_set ={"aepfel", "bananen", "orangen"}
print(a_set)

# auf elem zugreifen
print(a_set[0]) # geht nicht, weil es unsortiert/unindexiert ist

# elem ändern
a_set[0] = 'Birnen' # sets sind unveränderbar
print(a_set)

# check if item exists
if 'aepfel' in a_set:
    print("Aepfel sind auf der Liste!")

# laenge des tuples
print(len(a_set))

# hinzufügen
a_set.add('birnen')
print(a_set)

# löschen
a_set.remove('birnen')
print(a_set)
