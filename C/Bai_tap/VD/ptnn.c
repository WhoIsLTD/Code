//Phuong trinh bac nhat
#include <conio.h>
#include <math.h>
#include <stdio.h>
int PTBN (float a, float b,float x)
{
	int n;
	n=2;
	if(a == 0)
	{
		if(b == 0) n = -1;
		else n = 0;		
	}
	else
	{ x=-b/a;
	n=1;
	}
	return n;
}

void main ()
{
	float a,b,x;
	int n;
	printf ("Giai phuong trinh bac nhat ax + b = 0\n");
	printf("Nhap vao he so a: "); scanf("%f", &a);
	printf("Nhap vao he so b: "); scanf("%f", &b);
	printf("\n");
	if (PTBN(a,b,x) == -1) printf("Phuong trinh co vo so nghiem!");
	if (PTBN(a,b,x) == 0) printf("Phuong trinh vo nghiem!");
	if (PTBN(a,b,x)== 1) printf ("Phuong trinh co nghiem x = %4.2f",-b/a);
	getch();
}
