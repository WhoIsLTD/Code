#include <stdio.h>
#include <conio.h>
int fibo(int n)
{
   int f0 = 1, f1 = 1, f, i;
	if(n < 2)
	   return 1;
	i = 1;
	while(i < n)
	{
	   f = f0 + f1;
	   f0 = f1;
	   f1 = f;
	   i++;
	}
	return f;
}
void main ()
{
	int n, i, j, m = 0, h, k;
	do {
		printf ("Nhap so nguyen duong n = ");
		scanf ("%d", &n);
	}
	while (n<=0);
	
	for (i=0; i<n; i++)
	{
		j=0;
		while(i>fibo(j)) ++j;
		if(i == fibo(j))
			{
				h = i;
				j=0;
				while(n-i > fibo(j)) ++j;
				if (n-i == fibo(j))
				{
					k = n-i;
					m = 1;	
					break;
				}
			}
	}
	if (m=1)	printf ("%d la tong cua hai so fibonaci %d va %d.", n, h, k);
	else printf ("%d KHONG phai la tong cua hai so fibonaci khac nhau.",n);
	getch();
}
	
	
