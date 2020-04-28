//Phuong trinh bac nhat
#include <math.h>
#include <stdio.h>
int PTBN (float a, float b, float x)
{
	int n;
	if(a == 0)
	{
		if(b == 0) n = 0;
		else n = 1;		
	}
	else
	{
		x = -b/a;
		printf ("%f", x);
		n = 2;
	}
	return x;
}

void main ()
{
	float a,b, x;
	int n;
	printf ("Giai phuong trinh bac nhat ax + b = 0\n");
	printf("Nhap vao he so a: "); scanf("%f", &a);
	printf("Nhap vao he so b: "); scanf("%f", &b);
	printf("\n");
	n = PTBN(a,b,x);
	if (n == 0) printf("Phuong trinh co vo so nghiem!");
	if (n == 1) printf("Phuong trinh vo nghiem!");
	if (n == 2) printf ("Phuong trinh co nghiem x = ", PTBN(a,b,x));
}
