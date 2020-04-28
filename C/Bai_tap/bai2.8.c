#include <stdio.h>
#include <conio.h>
void main ()
{
	float max=0, x=1;
	while (x != 0)
	{
		printf ("Nhap so thuc: ");
		scanf ("%f",&x);
		if (max<x) max=x;
	} 
	printf ("Max = %f",max);
	getch ();
}
