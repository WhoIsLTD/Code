'''
A dictionary is a collection which is unordered,
changeable and indexed. 
In Python dictionaries are written with curly brackets, 
and they have keys and values.
'''

a_dict =	{
  "hersteller": "Mercedes",
  "model": "CLA",
  "jahr": 2013
}
print(a_dict)

# hersteller ausgeben
print(a_dict['hersteller'])

# JAHR ändern
a_dict['jahr'] = 2008
print(a_dict)

# elem hinzufügen
a_dict['zustand_neu'] = True
print(a_dict)

# elem löschen
a_dict.pop('zustand_neu')
print(a_dict)