#include <stdio.h>
#include <conio.h>
int giaithua (int n)
{
	int i, gt = 1;
	for (i=1; i<=n; i++)
		gt = gt*i;
	return gt;
}
void main ()
{
	int n;
	do
	{
		printf ("Nhap so n = ");
		scanf ("%d", &n);
	}while (n<0);
	printf ("%d! = %d ",  n, giaithua(n));
	getch();
}
