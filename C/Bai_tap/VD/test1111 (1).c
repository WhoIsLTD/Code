#include <stdio.h>
// ham tim ucln
int ucln(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}
// main
int main()
{
    int n, i, a[100], s;
    // nhap day so
    do
    {
        printf("nhap vao so nguyen n: ");
        scanf("%d", &n);
    } while (n < 0 || n > 100);
    for (i = 0; i < n; i++)
    {
        printf("\nnhap vao a[%d]: ", i + 1);
        scanf("%d", &a[i]);
    }
    // in day so
    printf("\nday vua nhap la:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    // tim max, min
    int max = a[0], min = a[0];
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
    }
    // kiem tra so nguyen to cung nhau
    if (ucln(max, min) != 1)
        printf("\nso lon nhat, nho nhat khong phai la nguyen to cung nhau");
}