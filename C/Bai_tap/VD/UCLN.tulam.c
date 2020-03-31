#include <stdio.h>
#include <conio.h>
void main ()
{
	int a, b, i, j, ucln=1;
	printf ("Nhap vao so a = ");
	scanf ("%d",&a);
	printf ("Nhap vao so b = ");
	scanf ("%d",&b);
	for (i=1;i<=a+b;i++)
		if (a%i == 0 && b%i == 0 && ucln <i)
			ucln = i;
	printf ("Uoc chung lon nhat cua hai so %d va %d la: %d",a,b,ucln);
	getch();
}
