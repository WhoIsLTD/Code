#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	int min,a[100],n,i,imax,duong,am,sum,dem,imin;
	do{
		printf("Nhap so phan tu mang n: ");
		scanf("%d",&n);
	}while(n<=0 || n>100);
	   for(i=0;i<n;i++)
	   {
	   	    printf("nhap phan tu thu %d: ",i);
	   	    scanf("%d",&a[i]);
	   }
	   printf("\n mang 1 chieu\n:");
	   for(i=0;i<n;i++)
	        printf("%4d",a[i]);
