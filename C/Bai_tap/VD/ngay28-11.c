#include <stdio.h>
#include <math.h>
int main ()    
{
	int i, j, n, h, k, tg, ngto;
	
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
	printf ("\nTong S = %.3f",s);
	//In cac so chinh phuong
	for (i=0; i<n; i++)
	{
		j = 0;
   	while(j*j <= a[i])
		{
      	if(j*j == a[i])
			{
         	printf("%d", a[i]);
      	}
        ++j;
   	}
	}
	//In cac so hoan thien
	printf ("\nDay cac so hoan thien la: ");
	for(k=1;k<n;k++)
	{
		s=0;
		for (i=1;i<k;i++)
			if (k%i==0)
			s=s+i;
		if (s==k) printf ("%d ",k);
	}
	//Sap xep day tang
	for (i=0;i<n;i++)
	for (j=i+1;j<=n;j++)
		if (a[i]>a[j])
		{
			tg = a[i];
			a[i] = a[j];
			a[j] = tg;
		}
	printf ("\nDay tang dan la: ");
	for (i=0;i<n;i++)
		printf ("%4d", a[i]);
	//Tim so lon nhat
	for (i=0; i<n; i++)
	{
		max = a[0];
		if (max <= a[i]) max = a[i];
	}
	//Tim so nho nhat
	for (i=0; i<n; i++)
	{
		min = a[0];
		if (min >= a[i]) min = a[i];
	}
	printf ("\nSo lon nhat la: %d.",max);
	printf ("\nSo nho nhat la: %d.",min);
	//Tim UCLN cua max min
	h = max; k = min;
	while (h!=k)
		if (h>k) h = h - k;
		else k = k - h;
	printf ("\nUCLN(%d,%d) = %d\n", max, min, h);
	//Kiem tra phan so max/min, neu min = 0 => min = min + 1
	if (min == 0) min = min + 1;
	if (h==1)
		printf ("Phan so %d/%d la phan so toi gian", max, min);
	else
		printf ("Phan so %d/%d KHONG la phan so toi gian", max, min);
	return 0;

}
