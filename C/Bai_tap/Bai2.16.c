#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	int n, i, x, gt = 1;
	float e;
	double s = 0;
	printf("Nhap do chinh xac e = ");
	scanf("%f", &e);
	printf("Nhap x = ");
	scanf("%d", &x);
	do
	{
		printf("Nhap n (le) = ");
		scanf("%d", &n);
		for (i = 0; i <= n; i++)
			gt = gt * i;
		gt = abs(pow(x, n) / gt);
	} while (n % 2 == 0 || n <= 0 || gt >= e);
	gt = 1;
	for (i = 0; i <= n; i++)
		s = s + pow(-1, i) * pow(x, 2 * i + 1) / (gt * 2 * i + 1);
	printf("Sin(%d) = %f", x, s);
	getch();
}
