a = int(input("a: "))
b = int(input("b: "))
c = int(input("c: "))
if a == b == c:
    print("Equilateral triangle")
elif a != b != c:
    print("Scalene triangle")
else:
    print("Isosceles triangle")