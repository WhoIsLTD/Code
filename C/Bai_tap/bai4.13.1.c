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
	int n, i = 0;
	do {
		printf ("Nhap so nguyen duong n = ");
		scanf ("%d", &n);
	}
	while (n<=0);

   while(n > fibo(i)) ++i;
   if(n == fibo(i))
   	printf ("%d la 1 so fibonica",n);
   else printf ("%d KHONG phai so fibonica",n);
   getch();
}
	
	
