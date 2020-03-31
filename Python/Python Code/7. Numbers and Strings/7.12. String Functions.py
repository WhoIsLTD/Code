# capitalize() - Capitalizes first letter of string
# center(width, fillchar) -Returns a string padded with fillchar
# with the original string centered to a total of width columns.
# count(str, beg= 0,end=len(string)) Counts how many times str occurs in string or
# in a substring of string if starting index beg and ending index end are given.
# endswith(suffix, beg=0, end=len(string)) Determines if string or a substring of string (if starting index beg and ending
# index end are given) ends with suffix; returns true if so and false otherwise.
# expandtabs(tabsize=8) Expands tabs in string to multiple spaces;
# defaults to 8 spaces per tab if tabsize not provided.
# find(str, beg=0 end=len(string))Determine if str occurs in string or in a substring of string
# if starting index beg and ending index end are given returns index if found and -1 otherwise.
# index(str, beg=0, end=len(string)) Same as find(), but raises an exception if str not found.
# isalnum() Returns true if string has at least 1 character and all characters are alphanumeric and false otherwise.
# isalpha() Returns true if string has at least 1 character and all characters are alphabetic and false otherwise
# isdigit() Returns true if the string contains only digits and false otherwise.
# islower() Returns true if string has at least 1 cased character and all cased characters are in lowercase and false otherwise.
# isnumeric() Returns true if a unicode string contains only numeric characters and false otherwise.

a = "this is great!!"
b = "this is\t great!!"
print("Capitalizee:", a.capitalize())
print("Center", a.center(20,'x'))
g = 's'
print("count : ", a.count(g))
print("end with", a.endswith('!'))
print('Expand tabs', b.expandtabs())
print('find:', a.find('s'))
print('index', a.index('g'))
print('isalnum', a.isalnum())
print('isalpha', a.isalpha())
print('isdigit', a.isdigit())