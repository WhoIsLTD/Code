#include <stdio.h> 
#include <stdlib.h>
int NT( int n)
{
	int i, kqua =1;
	for(i=2; i<=n/2; i++)
		if(n%i ==0)
		{
			kqua=0;
			break;
		}
	return kqua;
}
void main()
{
	int s=0,i;
	for(i=2; i<=100; i++)
	if(NT(i)==1) {
		printf("%d\t",i);
		s=s+i;
	}
	
	printf("\nTong cac so nguyen to tu 1 den 100 = %d",s);
	getch();
}
