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
		
	duong = am = summ = demnt = 0;
	min = a [0];
	for (i=0;i<n;i++)
	{
		//dem so duong
		if (a[i] > 0) duong++;
		//TBC cac so am
		if (a[i] < 0)
		{
			summ += a[i];
			am +=1;
		}
		//vi tri phan tu nho nhat
		if (a[i] < min)
		{
			min = a[i];
			imin = i;
		}
	}
	printf ("\nDay co %d so duong.", duong);
	printf("\nTrung binh cong cac so am la: %f", 1.0*summ/am);
	printf ("\nPhan tu nho nhat la %d o vi tri %d", min, imin + 1);
	//dem va in ra cac SNT
	printf ("\nDay co cac so nguyen to la: ");
	for (i=0;i<n;i++)//Duyet mang
	{
		if(a[i]>1)
		{
			for (j=2;j<=floor(sqrt(a[i])); j++)//Kiem tra so nguyen to
			{
				ngto = 1;
				if (a[i]%j==0)
				{
					ngto = 0;
					break;
				}
			}
			if (ngto==1) 
			{
				printf ("%4d",a[i]);
				demnt += 1;
			}
		}	
	}
	printf ("\nDay co %d so nguyen to.", demnt);
	//nhap so x
	printf ("\nNhap so x = ");
	scanf ("%d",&x);
	demnt = 0;
	for (i = 0; i<n;i++)
	{
		co = 0;
		if (a[i] == x) 
		{
			co = 1;
			ico = i;
		}
		if (co == 1) printf ("\nTrong mang co phan tu a[%d] co gia tri %d", ico+1, x);
		else demnt += 1;
	} 
	if (demnt==n) printf ("Trong mang khong co phan tu %d",x);
	// xep day giam dan
	for (i=0;i<n;i++)
		for (j=i+1;j<=n;j++)
			if (a[i]<a[j])
			{
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
	printf ("\nDay giam dan la: ");
	for (i=0;i<n;i++)
		printf ("%4d", a[i]);
	getch();
}

	
