a = int(input("a: "))
s = 0
for i in range(1, a):
    if a % i == 0:
        s += i
if s == a:
    print("la so hoan thien")
else:
    print("khong la so hoan thien")
