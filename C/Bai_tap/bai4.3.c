//Giai he phuong trinh bac nhat
#include "stdio.h"
#include "conio.h"
void hpt(float a, float b, float c, float d, float e, float f)
{
	float Dx, Dy, D;
	D = a*e - b*d;
	Dx = c*e - b*f;
	Dy = a*f - c*d;
	printf("\n%.fx + %.fy = %.f", a, b, c);
	printf("\n%.fx + %.fy = %.f", d, e, f);
	if(D == 0 && Dx == 0)
		printf("\nHe pt vo so nghiem");
	if(D == 0 && Dx != 0)
		printf("\nHe pt vo nghiem");
	if(D != 0)
	{
		printf("\nHe co nghiem");
		printf("\nx = %.f", Dx/D);
		printf("\ny = %.f", Dy/D);
	}
}

void main()
{
	float a, b, c,d, e, f;
	
	printf("\nNhap vao lan luot cac he so a, b, c, d, e, f:\n");
	scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
	hpt(a,b,c,d,e,f);
	
   getch();
}
