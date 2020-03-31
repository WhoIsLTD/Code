#include <stdio.h>
#include <math.h>
void main ()    
{
	int n, i, gt = 1;
	float e, x;
	double s = 0;
	printf ("Nhap do chinh xac e = "); scanf ("%f",&e);
	printf ("Nhap x = "); scanf ("%d",&x);
	do{
		printf ("Nhap n  = "); scanf ("%d",&n);
		for (i=0; i<=n; i++) gt = gt*i;
		gt = abs (pow(x,n)/gt);
		} while ( n <=0 || gt >= e);
	gt = 1;
	for (i=0; i<=n; i++)
		s = s + pow(x,i)/(gt*i);
	printf ("e^(%d) = %f", x, s);
    getch();
}
