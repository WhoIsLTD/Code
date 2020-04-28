//tim so chinh phuong
#include <stdio.h>
#include <math.h>
int CP (int n)
{
	int kq=0;
	if (n==sqrt(n)*sqrt(n))
		kq=1;
	return kq;
}
void main ()
{
	int n;
	do 
	{
		printf ("Nhap so nguyen duong can kiem tra: ");
		scanf ("%d",&n);
	} while (n<=0);
	if (CP (n)==1)
		printf ("\nSo %d la 1 so chinh phuong.", n);
	else
		printf ("\nSo %d KHONG la 1 so chinh phuong.", n);
}
