#include <stdio.h>
#include <conio.h>
void main ()
{
	int a, b, t1, t2;
	do{
	printf ("Nhap vao so a = ");
	scanf ("%d",&a);
	printf ("Nhap vao so b = ");
	scanf ("%d",&b);
	} while (a <= 0 || b <= 0);
	t1 = a; t2 = b;
	while (a!=b)
		if (a>b) a = a - b;
		else b = b - a;
	printf ("UCLN(%d,%d) = %d", t1, t2, a);
}
//while true: a= .... if (a>0): break;
