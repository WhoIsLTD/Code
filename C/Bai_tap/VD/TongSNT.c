#include <stdio.h>
#include <conio.h>
#include <math.h>
int ngto(int n)
{
	int ngto, i;
	{
		ngto=1;
		for (i=2;i<=floor(sqrt(n)); i++)
			if (n%i==0)
			{
				ngto = 0;
				break;
			}
	}
	return ngto;
}
void main ()
{
	int ngto, n, k, i, s=0;

	printf ("Tong cac so nguyen to nho hon 100 la:\n");
	for (k=2;k<100;k++)
	if (ngto==1) 
		{
		s = s + k;
		}
	}
	printf ("%d",s);
	getch();
}
