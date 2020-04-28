#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float a,b,c,d, max, min;
    printf("Nhap vao 4 so:\n");
    scanf("%f%f%f%f", &a, &b, &c, &d);
    max=a>b?a:b;
    max=max>c?max:c;
    max=max>d?max:d;

    min=a<b?a:b;
    min=min<c?min:c;
    min=min<d?min:d;
    printf("Max : %10.1f \nMin : %10.1f",max,min);
    getch();
}

