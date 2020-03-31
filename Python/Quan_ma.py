h = int(input("Nhập hàng: "))
c = int(input("Nhập cột: "))
dem = 0
if h+2 <= 8:
    if c - 1 > 0:
        dem += 1
    if c + 1 <= 8:
        dem += 1
if h - 2 >= 1:
    if c + 1 <= 8:
        dem += 1
    if c - 1 > 0:
        dem += 1
if c+2 <= 8:
    if h - 1 > 0:
        dem += 1
    if h + 1 <= 8:
        dem += 1
if c - 2 >= 1:
    if h + 1 <= 8:
        dem += 1
    if h - 1 > 0:
        dem += 1
print("Số nước quân mã có thể đi là: ", dem)
