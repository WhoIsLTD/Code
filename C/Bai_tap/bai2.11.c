#include <stdio.h>
#include <conio.h>
void main ()
{
	int n, i, s=0;
	do{
	printf ("Nhap vao 1 so nguyen duong: ");
	scanf ("%d",&n);
	} while (n<=0);
    while(n > 0){
        i = n % 10;
        s = s + i;
        n = n / 10;
    }
    printf("Tong cac chu so cua no la: %d", s);
    getch();
}

