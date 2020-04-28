#include <stdio.h>
#include <conio.h>
#include <math.h>
void main ()
{
	int ngto, n, k, i;
	do{
	printf ("Nhap so can kiem tra: ");
	scanf ("%d",&n);
	} while (n<=1);
	printf ("Cac so nguyen to nho hon %d la:\n",n);
	for (k=2;k<n;k++)
	{
		ngto=1;
		for (i=2;i<=floor(sqrt(k)); i++)
			if (k%i==0)
			{
				ngto = 0;
				break;
			}
		if (ngto==1) printf ("%d ",k);
	}
	getch();
}
