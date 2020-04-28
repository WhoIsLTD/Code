#include <stdio.h>
#include <math.h>
void main ()    
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
	//Tong day so theo cong thuc
	float s=0;
	for (i=0; i<n; i++)
	{
		s = s + a[i]*1.0/(i+1);
	}	
	printf ("\nTong S = %.3f",s);
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
	//In cac so chinh phuong
	printf ("\nDay cac so chinh phuong la: ");
	for (i=0; i<n; i++)
	{
   	if (a[i]==sqrt(a[i])*sqrt(a[i]))
      	printf("%4d", a[i]);   
	}
	//In cac so hoan thien
	printf ("\nDay cac so hoan thien la: ");
	for(i=0;i<n;i++)
	{
		s=0;
		for (j=1;j<a[i];j++)
			if (a[i]%j==0)
			s=s+j;
		if (s==a[i]) printf ("%4d ",a[i]);
	}
	//Sap xep day tang
	for (i=0;i<=n;i++)
		for (j=i+1;j<n;j++)
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
	printf ("\nSo lon nhat la: %d",max);
	printf ("\nSo nho nhat la: %d",min);
	//Tim UCLN cua max min
	h = max; k = min;
	while (h!=k)
		if (h>k) h = h - k;
		else k = k - h;
	printf ("\nUCLN(%d,%d) = %d\n", max, min, h);
	//Kiem tra phan so max/min, neu min = 0 => min = min + 1
	if (min == 0) min = min + 1;
	if (h==1 || min == 1)
		printf ("Phan so %d/%d la phan so toi gian", max, min);
	else
		printf ("Phan so %d/%d KHONG la phan so toi gian", max, min);
	getch();
}
