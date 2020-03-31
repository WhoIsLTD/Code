#include <stdio.h>
#include <math.h>
void main ()
{
	int a, b, i, s=0, dem=0, a1, a2;
	printf ("Nhap vao 2 so nguyen duong:\n");
	do{
	printf ("a = ");
	scanf ("%d",&a);
	printf ("b = ");
	scanf ("%d",&b);
	} while (a<=0 || b<=0);
	s = a + b;
	a1 = s;
	while(s > 0)
	{
     i = s % 10;
     s = s / 10;
     dem = dem + 1;
   }
	a2 = a1/pow(10,dem-2);
	if (dem == 4)
		printf ("Tong %d + %d la so co bon chu so", a, b);
	else
		printf ("Tong %d + %d KHONG la so co bon chu so", a, b);
	if (a2 == 69)
		printf ("va co hai chu so hang sau cung ben trai la 69.");
	else 
		printf ("va KHONG co hai chu so hang sau cung ben trai la 69.");
}
