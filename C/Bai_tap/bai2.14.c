#include <stdio.h>
#include <conio.h>
void main ()
{
   unsigned int a = 50000, b = 20000, c = 10000;
   unsigned long s;
   int i, j, k, n = 0;
   printf ("Co cac truong hop sau:\n\n");
   for (i = 0; i <= 4; i++)
       for (j = 0; j <= 10; j++)
            for (k = 0; k <= 20; k++)
			{
                s = a*i + b*j + c*k;
            	if (s == 200000) 
				{
				n += 1;
				printf("TH%d: %d to 50k, %d to 20k, %d to 10k\n\n", n, i, j, k);
				}
			}
	printf ("Co tat ca %d truong hop.", n); //lam sao cho cau lenh nay len dau
	getch();
}
