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
	        
	   duong=am=sum=dem=0;
	   min=a[0];
	   for(i=0;i<n;i++)
	   {
	   	if(a[i]>0)duong++;
	   	if(a[i]<0)
	   	{
	   		sum +=a[i];
	   		am+=1;
		   }
		if (a[i]<min)
		{
			min=a[i];
			imin=i;
		}
	   }
	   printf("\n day co %d so duong:",duong);
	   printf("\n trung binh cac so am la: %f",1.0*sum/am);
	   printf("\n phan tu nho nhat la %d o vi tri %d",min,imin);
	   
}
