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
		printf ("%4d",a[i]);
	printf("\n");
}

void main ()
{
	int n, *a;
	do {
		printf ("Nhap so phan tu cua day so n = ");
		scanf ("%d", &n);
	}
	while (n<=0 || n>100);
	//Cap bo nho
	a = (int *) malloc (n * sizeof(int)); 

	printf ("Nhap vao day so:\n");
	Nhap(a,n);
	printf ("Day so vua nhap:\n");
	In (a,n);
	//Giai phong bo nho
	free (a);
	getch();
}
