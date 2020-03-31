//Phuong trinh bac hai
#include <conio.h>
#include <math.h>
#include <stdio.h>
float ptbh(float a, float b, float c)
{
	int n = 0;
	if(a == 0)
	{
		if(b == 0)
		{
			if(c == 0) n = 1;
			else n = 2;		
		}
		else n = 3;
	}
   else 
	{
		float delta = b*b - 4*a*c;
		if(delta > 0) n = 5;
      else if(delta <0) n = 2;
      else n = 4;
   }
   return n;
}

void main ()
{
	float a, b, c, x1, x2, delta;
	printf ("Giai phuong trinh bac hai a2x + bx + c = 0\n");
	printf("Nhap vao he so a: "); scanf("%f", &a);
	printf("Nhap vao he so b: "); scanf("%f", &b);
	printf("Nhap vao he so c: "); scanf("%f", &c);
	printf("\n");
	ptbh(a,b,c);
	if (ptbh(a,b,c) == 1) printf("Phuong trinh co vo so nghiem!");
	else if (ptbh(a,b,c) == 2) printf("Phuong trinh vo nghiem!");
	else if (ptbh(a,b,c) == 3) printf ("Phuong trinh co nghiem x = %4.2f",-c/b);
	else if (ptbh(a,b,c) == 4) printf("phuong trinh co nghiem kep x = %f", -b/2*a);
	else if (ptbh(a,b,c) == 5)
	{
		delta = b*b - 4*a*c;
		x1 = (-b + sqrt(delta))/(2*a);
      x2 = (-b - sqrt(delta))/(2*a);
		printf("Phuong trinh co 2 nghiem phan biet la:\n");
	   printf("x1 = %4.2f \n", x1);
	   printf("x2 = %4.2f", x2);
	}
	getch();
}
