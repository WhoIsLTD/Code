#include <stdio.h>
#include <math.h>
void main ()    
{
	int i, j, n, ngto;
	
	do 
	{
		printf ("Nhap do dai cua mang: ");
		scanf ("%d",&n);
	} while (n<=0||n>=100);
	
	int a[n], max, min;
	
	//Nhap cac phan tu cua mang
	for (i=0; i<n; i++)
	{
     printf("a[%d] = ", i+1);
     scanf("%d",&a[i]);
   }
   //In day so
	printf ("\nDay so vua nhap la:\n");
	for (i=0; i<n; i++)
		printf ("%4d", a[i]);
	//In cac so nguyen to
	printf ("\nDay co cac so nguyen to la: ");
	for (i=0;i<n;i++)//Duyet mang
	{
		if(a[i]>1)
		{
			ngto = 1;
			for (j=2; j<=a[i]/2; j++)//Kiem tra so nguyen to
			{
				if (a[i]%j==0)
				{
					ngto = 0;
					break;
				}
			}
			if (ngto==1) 
			{
				printf ("%4d",a[i]);
			}
		}	
	}
	//Tong day so theo cong thuc
	float s=0;
	for (i=0; i<n; i++)
	{
		s = s + a[i]*1.0/(i+1);
	}	
	printf ("\nTong S = %.2f",s);
}
