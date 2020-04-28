#include <stdio.h>
#include <conio.h>
void main ()
{
	int n, bd, s=0;
	do{
	printf (" Nhap vao 1 so nguyen duong: ");
	scanf ("%d",&n);
	bd = n;
	} while (n<=0);
    while(n > 0){
        s += 1;
        n = n / 10;
    }
    printf(" %d co %d chu so", bd, s);
    getch();
}

