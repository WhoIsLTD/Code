n = int(input("nhap vao so luong phan tu: "))

list = []
for i in range (0, n):
    m = (input("nhap vao a[" + str(i) + "]: "))
    list.append(m)
max = list[0]
for j in range(len(list)):
    if max < list[j]:
        max = list[j]
print('max: ', max)
