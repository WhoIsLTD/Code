m = int(input())
n = int(input())
dem = 0
if m < n:
    for i in range(m, n+1):
        if i % 3 == 0 or i % 5 == 0:
            dem += 1
            print(i)
    print(dem)
for i in range(m, n-1, -1):
    if i % 3 == 0 or i % 5 == 0:
        dem += 1
        print(i)
print(dem)
