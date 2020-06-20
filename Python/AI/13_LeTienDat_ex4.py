n = int(input("nhập vào số lượng phần tử: "))
a = []
for i in range(n):
    v = float(input("nhập vào a[" + str(i) + "]: "))
    a.append(v)
print("Dãy số vừa nhập là: ")
print(a)
a.sort()
print("Dãy số sau khi sắp xếp tăng dần là: ")
print(a)
m = float(input("nhập vào một số thực: "))
if m in a:
    print("m đã tồn tại trong dãy")
else:
    for i in range(n):
        if m < a[i]:
            mi = i
            break
    if m >= a[n-1]:
        a.append(m)
    else:
        a.insert(mi, m)
    print("Thêm m vào vị trí thích hợp: ")
    print(a)
