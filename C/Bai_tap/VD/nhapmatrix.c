#include<stdio.h>
void main()
{
	int a[100][100],n,m,i,j;
	do{
		printf("Nhap so hang:");
		scanf("%d",&n);
		printf("Nhap so cot:");
		scanf("%d",&m);
	}while(n<=0 || n>100 || m<=0 || m>100);
	printf("\nNhap matrix:\n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			printf("a[%d][%d] = ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	printf("\nMang vua nhap la:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
		
		
}
