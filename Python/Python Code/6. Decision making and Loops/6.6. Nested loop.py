
a=b=0

while a < 5:
    while b < 5:
        print("Value of a is ", a, "; value of b is", b)
        b += 1
    a += 1
    b = 0
    print(a)


for c in range(5):
    for d in range(5):
        print(c, d)