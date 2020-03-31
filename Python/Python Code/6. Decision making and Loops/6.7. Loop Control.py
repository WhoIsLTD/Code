#Break # continue # pass

#Break -> Break the loop

a = [1,2,3,4,5]
for i in a:
    print(i)
    if i == 2:
        break
# continue break only the statement

for m in a:
    if m == 3:
        continue
    print('m is', m)

# pass ->  Special attention to a statement
for n in a:
    if n == 3:
        print('pass value', n)
    print('n value is:', n)