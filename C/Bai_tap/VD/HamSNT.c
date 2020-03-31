//VD chuong 4
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void Nhap(int *a, int n)
{
	int i;
	for (i=0; i<n; i++)
		{
			printf ("Phan tu thu %d: ", i+1);
			scanf ("%d", &a[i]);
		}
}

void In(int *a, int n)
{
	int i;
	for (i=0; i<n; i++)
		printf ("%d\t",a[i]);
	printf("\n");
}

int SNT(int k)
{
	int ngto, i;
	//if (k>=2) van nhan so 0 la so nguyen to, tai sao?
	{
		ngto=1;
		for (i=2;i<=floor(sqrt(k)); i++)
			if (k%i==0)
			{
				ngto = 0;
				break;
			}
	}
	return ngto;
}

void main ()
{
int n, *a, i;
	//Cap bo nho
	a = (int *) malloc (n * sizeof(int)); 
	//Nhap day
	do {
		printf ("Nhap so phan tu cua day so n = ");
		scanf ("%d", &n);
	}
	while (n<=0 || n>100);
	printf ("Nhap vao day so:\n");
	Nhap(a,n);
	
	//In day
	printf ("Day so vua nhap:\n");
	In(a,n);
	
	//In day SNT
	printf ("\nDay cac so nguyen to la:\n");
	for (i=0;i<n;i++)
		if(SNT(a[i])==1 && a[i]>=2) printf("%d\t", a[i]);
		
	//Giai phong bo nho
	free (a);
	getch();
}
