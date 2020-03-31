#include <stdio.h>
#include <math.h>
int gt (int n)
{
	int i, gth = 1;
	for (i=1; i<=n; i++)
		gth = gth*i;
	return gth;
}
void main()
{
   int n, i;
   float a, s=0;
   do
	{
		printf ("Nhap so thuc duong a = ");
		scanf ("%f", &a);
		printf ("Nhap so nguyen duong n = ");
		scanf ("%d", &n);
	}while (n<=0 && a<=0);
	for (i=0; i<n;i++)
		s = sqrt(s + gt(i+1)/pow(a, (n-i)));
	printf ("Tong S = %f",s);
	
}
