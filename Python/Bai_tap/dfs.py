map = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F'],
    'D': [],
    'E': ['F'],
    'F': []
}
danhSachDaDuyet = []
duongDi = []


def duyet(map, ds, dau, ketThuc):
    ds = ds + [dau]
    print(ds)
    if(dau == ketThuc):
        yield ds
    for i in map[dau]:
        duyet(map, ds, i, ketThuc)


print(list(duyet(map, danhSachDaDuyet, 'A', 'F')))
