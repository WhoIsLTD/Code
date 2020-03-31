# strings können mit "" oder '' definiert werden
a = "Hallo Welt"
b = 'Hallo Welt'

# Zugriff auf bestimmte zeichen im string
print(a[1]) # erster char ist bei 0

# Zugriff auf mehrere zeichen
print(b[2:6])

# laenge des strings
print(len(a))

# lower / upper 
print(a.lower())
print(a.upper())

# strip
print(a.split(" "))

# verkettung
c = a + b
print(c)