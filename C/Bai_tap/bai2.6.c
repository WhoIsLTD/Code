#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int k, n, i, s=0;
	do
	{
		printf ("Nhap so n>=1: ");
		scanf ("%d",&n);
	}
	while (n<=1);
	for (i=1;i<n;i++)
		if (n%i==0)
			s=s+i;
	if (s==n) printf ("%d la so hoan thien",n);
	else printf ("%d khong la so hoan thien",n);
	getch();
}
