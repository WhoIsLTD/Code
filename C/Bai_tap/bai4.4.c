#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
//Nhap mang
void Nhap(float *a, int n)
{
	int i;
	for (i=0; i<=n; i++)
		{
			printf ("Nhap a[%d]: ", i);
			scanf ("%f", &a[i]);
		}
}

void In(float *a, int n)
{
	int i;
	for (i=0; i<=n; i++)
		printf ("%.2f\t", a[i]);
	printf("\n");
}

//Tinh da thuc
float dt(float *a, int n, float x)
{
	float s=0;
	int i, j=n;
	for(i=0; i<=n; i++)
		{
			s = s + a[i] * pow(x,j);
			j--;
		}
	return s;
}

void main ()
{
int n;
float *a, x;
	//Cap bo nho
	a = (float *) malloc (n * sizeof(float)); 
	//Nhap mang
	do {
		printf ("Nhap bien nguyen n = ");
		scanf ("%d", &n);
	}
	while (n<=0 || n>100);
	printf ("Nhap mang thuc:\n");
	Nhap(a,n);
	
	//In mang
	printf ("Mang vua nhap:\n");
	In(a,n);
	
	printf ("Nhap so thuc x = ");
	scanf ("%f", &x);

	printf("Gia tri da thuc P(x) = %.2f", dt(a,n,x));
	//Giai phong bo nho
	free (a);
	getch();
}
