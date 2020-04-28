#include <stdio.h>
#include <conio.h>
#include <math.h>
void main ()
{
	int a[100][100],i,j,n,m, x,duong=0, am=0, summ=0, min,tg, dem=0, imin = 0,jmin = 0, ngto, k;
	do{
	printf ("Nhap vao so hang cua mang n = ");
	scanf ("%d",&n);
	printf ("Nhap vao so cot cua mang m = ");
	scanf ("%d",&m);
	} while (n <= 0 || m <=0 || n >= 100 || m >= 100);
	for (i=0; i<n; i++)
		for (j=0;j<m;j++)
		{
			printf ("a[%d][%d] = ",i+1,j+1);
			scanf ("%d",&tg);
			a[i][j] = tg;
		}
	printf ("Ma tran nhap vao:\n");
	for (i=0;i<n;i++)
	{
		for(j = 0; j < m; j++) printf("%d\t", a[i][j]);
    	printf("\n");
	}
	//dem so duong, TBC cac so am, vi tri phan tu nho nhat
	min = a[0][0];
	for (i=0;i<n;i++)
	{
		for(j = 0; j < m; j++)
		{
			if (a[i][j] > 0) duong += 1;
			if (a[i][j] < 0)
			{
				am += 1;
				summ += a[i][j];
			}
			if (a[i][j] < min)
			{
				min = a [i][j];
				imin = i; jmin = j;
			}
		}
	}
	printf ("\nCo %d so duong.", duong);
	printf("\nTrung binh cong cac so am la: %f", 1.0*summ/am);
	printf ("\nPhan tu nho nhat la a[%d,%d] = %d", imin+1,jmin+1, min);
	//dem va in ra cac SNT
	printf ("\nMa tran co cac so nguyen to la: ");
	am = 0;
	for (i=0; i<n; i++)
		for (j=0;j<m;j++)
		{
			ngto=1;
			for (k=2;k<=floor(sqrt(a[i][j])); k++)
				if (a[i][j]%k==0)
				{
					ngto = 0;
					break;
				}
			if (ngto==1 && a[i][j] > 1)
			{
				am += 1;
				printf ("%d ",a[i][j]);}}
	printf ("Co %d so nguyen to.", am);
	getch();
}

	
