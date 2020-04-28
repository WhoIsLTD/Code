def MaTran(a, m, n):
    for i in range(0, m):
        a.append([])
        for j in range(0, n):
            x = int(input("Nhập vào a[%d][%d]: " % (i, j)))
            a[i].append(x)

def ChuyenVi(a, m, n):
    cv=[]
    for j in range(n):
        cv.append([])
        for i in range (m):
            ent=a[i][j]
            cv[j].append(ent)
    print(cv)
a = []
b = []
c = []

m = int(input("Nhập vào hàng ma trận 1:"))
n = int(input("Nhập vào cột ma trận 1:"))
MaTran(a, m, n)

m1 = int(input("Nhập vào hàng ma trận 2:"))
n1 = int(input("Nhập vào cột ma trận 2:"))
MaTran(b, m1, n1)
c = a
if m != m1 or n != n1:
    print("Hai ma trận không bằng nhau")
else:
    for i in range (0, m):
        for j in range (0, n):
            c[i][j] = a[i][j] + b[i][j];
    print("Tổng 2 ma trận a, b là: ")
    print(c)
print("Ma trận b:")
print(b)
print("Ma trận chuyển vị của b là: ")
print(ChuyenVi(b, m, n))