//mang 2 chieu
// duyet mang can dung 2 vong for
//tim phan tu lon nha
//co x trong mang khong, bn x? phan tu dau = x? vi tri?
//phan tu lon nhat nho nhat
#include <stdio.h>
#include <conio.h>
void main ()
{
	int a[100][100],i,j,n,m, x,tg, dem=0, imax = 0,jmax = 0;
	do{
	printf ("Nhap vao so hang cua mang n = ");
	scanf ("%d",&n);
	printf ("Nhap vao so cot cua mang m = ");
	scanf ("%d",&m);
	} while (n <= 0 || m <=0 || n >= 100 || m >= 100);
	for (i=0; i<n; i++)
		for (j=0;j<m;j++)
		{
			printf ("a[%d][%d] = ",i+1,j+1);
			scanf ("%d",&tg);
			a[i][j] = tg;
		}
	printf ("Ma tran nhap vao:\n");
	for (i=0;i<n;i++)
	{
		for(j = 0; j < m; j++)
        printf("%d\t", a[i][j]);
    	printf("\n");
	}
	for (i=0; i<n; i++)
		for (j=0;j<m;j++)
			if (a[i][j] > a [imax][jmax])
				{
					imax = i; jmax = j;
				}
	printf ("So lon nhat la % d tai hang %d tai cot %d", a [imax][jmax], imax + 1, jmax + 1 );
	getch();
}
				
	
		
			
