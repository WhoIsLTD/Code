#include <stdio.h>
#include <conio.h>
#include <math.h>
void main ()
{
	int ngto=1, n, i;
	do{
	printf ("Nhap so can kiem tra: ");
	scanf ("%d",&n);
	} while (n<=1);
	for (i=2;i<=n/2; i++)
		if (n%i==0)
		{
			ngto = 0;
			break;
		}
	if (ngto==0) printf ("%d KHONG phai la so nguyen to",n);
	else printf ("%d la so nguyen to",n);
	getch();
}
