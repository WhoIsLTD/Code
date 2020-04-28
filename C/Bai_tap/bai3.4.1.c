//Nhap du lieu cho mang 1 chieu bang con tro
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void main ()
{
	int i, j, k, n;
	float *a, tg, x;
	//Nhap so phan tu cua day
	do{
		printf ("Nhap vao so phan tu cua mang n = ");
		scanf ("%d",&n);
	} while (n <= 0);
	
	//Cap bo nho
	a = (float *) malloc (n * sizeof(float));
	
	//Nhap day so
	for (i=0; i <n; i++)
	{
		printf ("Nhap phan tu thu %d: ",i+1);
		scanf ("%f",&a[i]);
	}
	//In day so
	printf ("\nMang 1 chieu:\n");
	for (i=0;i<n;i++)
		printf ("%4.2f\t", a[i]);
		
	//Day so xap xep
	printf ("\nDay tang dan:\n");
	for (i=0;i<n;i++)
		for (j=i+1;j<=n;j++)
			if (a[i]>a[j])
			{
				tg = a[i]; a[i] = a[j]; a[j] = tg;
			}
			
	for (i=0;i<n;i++)
		printf ("%4.2f\t", a[i]);
		
	//Nhap x, chen x neu chua co
	printf ("\nNhap so thuc x = ");
	scanf ("%f", &x);
	int co = 0;
	for (i=0; i<n; i++)
		if (a[i]==x) co = 1;
	if (co == 0)
		{	for (i=0; i<n; i++)
				if (x>a[i]) k = i;
			for (i=n+1; i>k; i--)
				a[i] = a[i-1];
			a[k+1] = x;
		}
	for (i=0;i<n+1;i++)
		printf ("%4.2f\t", a[i]);
		
	//Giai phong bo nho
	free (a);
	getch();
}
