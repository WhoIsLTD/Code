#include <stdio.h>
#include <conio.h>
void main ()    
{
	int i, n, dem = 0;
	do 
	{
		printf ("Nhap do dai cua mang: ");
		scanf ("%d",&n);
	} while (n<0);
	float a[n], max;
	for (i= 0; i <= n; i++)
	{
        printf("Nhap cac gia tri trong mang: ");
        scanf("%f",&a[i]);
        max = a[0];
        if (max <= a[i]) max = a[i];
    }
    for (i= 0; i <= n; i++)
		if (max == a [i]) dem +=1;
    printf ("So lon nhat la: %f, xuat hien %d lan.",max,dem);
    getch();
}
