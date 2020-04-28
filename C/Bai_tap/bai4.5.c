//Giao diem cua AB, CD (cho toa do 4 diem)
#include "stdio.h"
#include "conio.h"


float hoanh(float a, float b, float c, float d)
{
	float Dx, D, x, y;
	D = a - c;
	Dx = b - d;
	x = Dx/D;
	return (x);
}
float tung(float a, float b, float c, float d)
{
	float Dy, D, y;
	D = a - c;
	Dy = a*d - c*b;
	y = Dy/D;
	return (y);
}

void main()
{
	int n, i;
	float a[15], b[15], a1, b1, c, d, x, y;
	for (i=10; i<14; i++)
	{
		printf("\nNhap toa do diem %X:\n", i);
		scanf ("%f%f", &a[i], &b[i]);
		printf ("%X(%.f,%.f)", i, a[i],b[i]);
	}

	a1 = -hoanh(a[10],b[10],a[11],b[11]);
	b1 = tung(a[10],b[10],a[11],b[11]);
	c = -hoanh(a[12],b[12],a[13],b[13]);
	d = tung(a[12],b[12],a[13],b[13]);
	x = hoanh(a1,b1,c,d);
	y = tung(a1,b1,c,d);
	
	printf ("\nToa do giao diem cua hai duong thang AB va CD la: (%.2f,%.2f)", x, y);
	
	
/*	A(-1,13); B(5,-3); C(6,-5); D(7,6)
	(5.95,-5.54)*/
	
/*	printf("\nNhap toa do diem A:");
	printf("\n");
	scanf ("%f%f", &a, &b);
	printf ("A(%f,%f)",a1,a2);
	
	printf("\nNhap toa do diem B:");
	printf("\n");
	scanf ("%f%f", &a, &b);
	printf ("B(%f,%f)",b1,b2);
	
	printf("\nNhap toa do diem C:");
	printf("\n");
	scanf ("%f%f", &a, &b);
	printf ("C(%f,%f)",c1,c2);
	
	printf("\nNhap toa do diem D:");
	printf("\n");
	scanf ("%f%f", &a, &b);
	printf ("D(%f,%f)",d1,d2);*/
	
   getch();
}
