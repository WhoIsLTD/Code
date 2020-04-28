#is # is not     a -> Memory <- b


a = 10
b = 10

if a is b:
    print('a is b and ', id(a), "is equal to ", id(b))

c = 30
if c is not b:
    print('c is not b and ', id(c), "is not equal to ", id(b))

d = 10

if d is b:
    print('d is b and ', id(d), "is not equal to ", id(b))