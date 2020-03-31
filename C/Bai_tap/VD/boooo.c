#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	int i,n;
	float a[100],s;
	do{
		printf("nhap day so n=");
		scanf("%d",&n);
	}while(n<=0);
	for(i=0;i<n;i++)
	{
		printf("\nnhap pt thu %d:",i+1);
		scanf("%f",&a[i]);
		
	}
	float max=a[0],min=a[0];
	for(i=0;i<n;i++)
	{
	if(max<a[i])
	    {max=a[i];
		}
	if(min>a[i])
	    {min=a[i];}}
	    
	s=max+min;
	printf("%f +%f =%f",max, min, s);
	
}

