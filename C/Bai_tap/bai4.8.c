#include <stdio.h>
#include <conio.h>
int Tong (int n)
{
	int i, s = 0;
	for (i=1; i<=n; i++)
		s=s+i;
	return s;
}
void main ()
{
	int n;
	do
	{
		printf ("Nhap so n = ");
		scanf ("%d", &n);
	}while (n<0);
	printf ("Tong cac so tu 0 den %d = %d ",  n, Tong(n));
	getch();
}
