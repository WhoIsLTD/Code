# Tuples erstellen
a_tuple = ("aepfel", "bananen", "orangen")
print(a_tuple)

# auf elem zugreifen
print(a_tuple[0])

# elem ändern
a_tuple[0] = 'Birnen' # tuples sind unveränderbar
print(a_tuple)

# check if item exists
if 'aepfel' in a_tuple:
    print("Aepfel sind auf der Liste!")

# laenge des tuples
print(len(a_tuple))

# hinzufügen/löschen geht nicht, weil tuples unveränderbar sind