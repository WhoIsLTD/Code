#include <stdio.h>
#include <conio.h>
int CS (int m)
{
	int i, s, n;
	n = abs (m);
	while(n > 0)
	{
     i = n % 10;
     s = s + i;
     n = n / 10;
   }
    return s;
}
void main ()
{
	int n;
	printf ("Nhap so nguyen n = ");
	scanf ("%d",&n);
	if (CS(n)%3 == 0) printf ("%d la so chia het cho 3", n);
	else printf ("%d KHONG chia het cho 3", n);
	getch();
}
