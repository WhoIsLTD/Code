#include <stdio.h>
#include <math.h>
void main ()
{
	int a[100][100],i,j,n,m;
	do{
	printf ("Nhap vao so hang cua mang n = ");
	scanf ("%d",&n);
	printf ("Nhap vao so cot cua mang m = ");
	scanf ("%d",&m);
	} while (n <= 0 || m <=0 || n >= 100 || m >= 100);
	//Nhap ma tran
	for (i = 0; i < n; i++)
     for (j = 0; j < m; j++)
     {
         printf("nhap a[%d][%d]:", i + 1, j + 1);
         scanf("%d", &a[i][j]);
     }
	//In ra 
	printf ("Ma tran nhap vao:\n");
	for (i=0;i<n;i++)
	{
		for(j = 0; j < m; j++) printf("%d\t", a[i][j]);
		printf("\n");
	}
    printf("ma ran chuyen vi:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", a[j][i]);
        }
        printf("\n");
    }
}

	
