//tim xem co phan tu x trong mang khong
#include <stdio.h>
#include <conio.h>
void main ()
{
	int a[100],i,n, x, dem=0, imax, co=0, ico = 0;
	do{
	printf ("Nhap vao so pha tu cua mang n = ");
	scanf ("%d",&n);
	} while (n <= 0 || n >= 100);
	for (i=0; i <n; i++)
	{
		printf ("Nhap phan tu thu %d: ",i+1);
		scanf ("%d",&a[i]);
	}
	printf ("\nMang 1 chieu:\n");
	for (i=0;i<n;i++)
	printf ("a[%d] = %d \t", i, a[i]);
	imax = 0;
	for (i = 1; i<n;i++)
		if (a[imax] < a [i]) imax = i;	
	printf ("\nPhan tu lon nhat = %d tai vi tri %d",a[imax], imax + 1);
	printf ("\nNhap so x = ");
	scanf ("%d",&x);
	for (i = 0; i<n;i++)
		if (x == a [i]) 
		{
			co = 1;
			ico = i;
			break;
			//dem++;
		}
	if (co==1) printf ("Trong mang co phan tu %d dau tien tai vi tri %d", x, ico+1);
	else printf ("Trong mang khong co phan tu %d",x);
	//printf ("Trong mang co %d = so %d.")
	getch();
}
