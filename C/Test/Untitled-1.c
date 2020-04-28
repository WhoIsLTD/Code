#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, n, *a, tg, x;
    //Nhap so phan tu cua day
    do
    {
        printf("Nhap vao so phan tu cua mang n = ");
        scanf("%d", &n);
    } while (n <= 0);

    //Cap bo nho
    a = (float *)malloc(n * sizeof(float));

    //Nhap day so
    for (i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    //In day so
    printf("\nNhung so chia het cho 3 la:\n");
    for (i = 0; i < n; i++)
        if (a[i] % 3 == 0)
            printf("%d\t", a[i]);
}
/* mã giả

print 'nhap so luong NUMBER'

a[] = so luong NUMBER

for NUMBER_1 đến NUMBER_n
    print'Nhap NUMBER '

print'nhung phan tu chia het cho 3 la: '
for NUMBER_1 đến NUMBER_n
    if NUMBER chia hết 3
        print'NUMBER'
        
Độ phức tạp O(n)
