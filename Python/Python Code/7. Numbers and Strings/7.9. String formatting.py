# + Concatenation
# * Repetition
# [] Slice
# [:] Range
# in
# not in
# r/R
# %

a = "Hello"
b = "world"

print(a+" " +b)
print(b*3)
print(a[1:4])

if 'o' in a:
    print(a)
if 'i' not in b:
    print(b)

print(R'Hi') # raw string

# Usage of Percentage
print("%s %s" %(a, b))