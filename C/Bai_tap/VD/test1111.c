#include <stdio.h>
int soht(int n)
{
    int i, s = 0, count;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            s += i;
    }
    if (s == n)
        count = 0;
    else
        count = 1;
    return count;
}
int main()
{
    int n, i, a[100], count = 0;
    do
    {
        printf("\nnhap so luong phan tu: ");
        scanf("%d", &n);
    } while (n < 0 || n > 100);
    for (i = 0; i < n; i++)
    {
        printf("\nnhap vao a[%d]: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nday vua nhap la:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);

    printf("so hoan thien trong day la:\n");
    for (i = 0; i < n; i++)
    {
        if (soht(a[i]) == 0)
        {
            printf("%d\t", a[i]);
            count++;
        }
    }
    if (count == 0)
        printf("\ntrong day khong co so hoan thien");
}