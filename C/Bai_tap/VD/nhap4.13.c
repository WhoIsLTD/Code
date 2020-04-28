/*#include <stdio.h>
int Fibo(int n)
{
    int a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    int i = 3, a;
    while (i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}
int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    printf("So Fibonacci thu %d la: %d", n, Fibonacci(n));
    return 1;
}*/
#include <stdio.h>
#include <conio.h>
 
int fibo(int n)
{
    int f0 = 1, f1 = 1, f, i;
    if(n < 2)
        return 1;
    i = 1;
    while(i < n)
    {
        f = f0 + f1;
        f0 = f1;
        f1 = f;
        i++;
    }
    return f;
}
int ktra(int n)
{
    int i = 0;
    while(n > fibo(i))
    {
        ++i;
    }
    if(n == fibo(i))
        return 1;
    return 0;
}
int main()
{
    int i, n;
    printf("n=");
    scanf("%d", &n);
    printf("%d is %s a fibonaci number", n, ktra(n) ? "" : "not");
    getch();
    return 0;
}
