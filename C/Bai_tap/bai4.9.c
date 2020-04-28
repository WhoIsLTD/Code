#include <stdio.h>
#include <conio.h>
int sln (int a, int b)
{
	int max;
	if(a>b)
		max=a;
	else
		max=b;
	return max;	
}
void main()
{
	int a, b, c, max;
	printf("nhap so a = ");
	scanf("%d",&a);
	printf("nhap so b = ");
	scanf("%d",&b);
	printf("nhap so c = ");
	scanf("%d",&c);
	max=sln(a,sln(b,c));
	printf("Max(%d,%d,%d) = %d", a,b,c,max);
	getch();
}
