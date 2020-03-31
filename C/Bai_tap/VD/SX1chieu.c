#include <stdio.h>
#include <conio.h>
#include <math.h>
void main ()
{
	int a[100], x, i, j, n, duong, am, summ, min, imin, ngto, demnt, tg, co, ico;
	do{
		printf ("Nhap vao so phan tu cua mang n = ");
		scanf ("%d",&n);
	} while (n <= 0 || n > 100);
	//Nhap day so
	for (i=0; i <n; i++)
	{
		printf ("Nhap phan tu thu %d: ",i+1);
		scanf ("%d",&a[i]);
	}
	//In day so
	printf ("\nMang 1 chieu:\n");
	for (i=0;i<n;i++)
		printf ("%4d", a[i]);
	// xep day tang dan
	for (i=0;i<n;i++)
		for (j=i+1;j<=n;j++)
			if (a[i]>a[j])
			{
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
	printf ("\nDay tang dan la: ");
	for (i=0;i<n;i++)
		printf ("%4d", a[i]);
	getch();
}
