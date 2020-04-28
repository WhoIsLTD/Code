#include <stdio.h>
void main ()
{
	int n, i, u=0;
	do{
	printf ("Nhap vao 1 so nguyen duong: ");
	scanf ("%d",&n);
	} while (n<=0);
    while(n > 0){
        i = n % 10;
        u = u * 10 + i;
        n = n / 10;
    }
    printf("So dao nguoc cua no la: %d\n", u);
}

