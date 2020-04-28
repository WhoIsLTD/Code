#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main ()
{
	int a[100][100], i,j,m,n;
	do
	{  
	   printf("Nhap vao so hang m = ");
	   scanf("%d",&m);
	   printf("Nhap vao so cot n = ");
	   scanf("%d",&n);
	}
	while(n<=0||n>100||m<=0||m>100);
	//nhap ma tran
	printf ("\n");
	for(i=0;i<m;i++)
	   for(j=0;j<n;j++)
	   {
			printf("a[%d][%d]= ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	//sap xep mang tang dan
	int tg,k,h;
	for (i = 0; i <= m*n - 1; i++)
		for (j = i+1; j <= m*n; j++)
			if 
		
	printf("\n\nMa tran sap xep tang dan la:\n");
	for(i=0;i<m;i++)
	  { for(j=0;j<n;j++)
	    printf("%5d",a[i][j]);
	      printf("\n");
			}
	  	getch();
}
