#include <stdio.h>
#include <conio.h>
void main ()
{
	int max=0, x=1;
	while (x != 0)
	{
		printf ("Nhap so nguyen: ");
		//neu nhap so thuc thi in ra vo han cau lenh tren, how to stop?
		scanf ("%d",&x);
		if (x%5==0 && max<x) max=x;
	} 
	printf ("Max = %d",max);
	getch ();
}
