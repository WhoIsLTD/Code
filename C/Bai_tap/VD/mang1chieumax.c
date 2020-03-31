#include <stdio.h>
#include <conio.h>
void main ()
{
	int a[100],i,n, imax;
	do{
	printf ("Nhap vao so pha tu cua mang n = ");
	scanf ("%d",&n);
	} while (n <= 0 || n >= 100);
	for (i=0; i <n; i++)
	{
		printf ("Nhap phan tu thu %d: ",i+1);
		scanf ("%d",&a[i]);
	}
	printf ("\nMang 1 chieu:\n");
	for (i=0;i<n;i++)
	printf ("a[%d] = %d \t", i, a[i]);
	imax = 0;
	for (i = 1; i<n;i++)
		if (a[imax] < a [i]) imax = i;
	printf ("\nPhan tu lon nhat = %d tai vi tri %d",a[imax], imax + 1);
	getch();
}
