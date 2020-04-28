def GiaiThua(n):
    ketQua = 0
    if n == 0:
        ketQua = 1
    else:
        ketQua = GiaiThua(n -1) * n
    return(ketQua)
print(GiaiThua(1))