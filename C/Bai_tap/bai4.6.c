#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int nt ( int n)
{
	int i, ngto=1;
	//if (k>=2) van nhan so 0 la so nguyen to, tai sao?
	for (i=2;i<=floor(sqrt(n)); i++)
		if (n%i==0)
		{
			ngto = 0;
			return 0;
		}
	return ngto;
}

int ht ( int n)
{
	int i, s = 0;
	for (i=1;i<n;i++)
		if (n%i==0)
			s=s+i;
	if (s==n) return 1;
	else return 0;
}

int ucln (int a, int b)
{
	int h = a, k = b;
	while (h!=k)
	{
		if (h>k) h = h - k;
		else k = k - h;
	}
	return h;
}

int bcnn (int a, int b)
{
	return (a*b/ucln(a,b));
}

void CacSoHT (int n)
{
	int i, k, s, dem=0;
	for(k=1;k<n;k++)
	{
		s=0;
		for (i=1;i<k;i++)
			if (k%i==0)
				s=s+i;
		if (s==k)
		{
			printf ("%d ",k);
			dem += 1;
		}
	}
	
}

void CacSNT (int n)
{
	int i, k, ngto, dem=0;
	for (i=2;i<n;i++)
	{
		ngto=1;
		for (k=2;k<=floor(sqrt(i)); k++)
			if (i%k==0)
			{
				ngto = 0;
				break;
			}
		if (ngto==1) 
		{
			printf ("%d ",i);
			dem += 1;
		}
	}
	if (dem==0) printf ("Khong co SNT!");
}

int bcnn_ds (int *a, int n)
{
	int max=a[0], i;
    for (i=1; i<n; i++)
    {
        max = (max>a[i]) ? max : a[i];
    }
    int bs = max;
    for (i=0; i<n; i++)
    {
        if (bs % a[i] != 0)
        {
            bs = bs + max;
            i=-1;
        }
    }
    return bs;
}

int main()
{
	int *a, n, i, A, b;
	//Nhap so phan tu cua day
	do{
		printf ("Nhap n (n>1): ");
		scanf ("%d",&n);
	} while (n < 2);
	
	//Cap bo nho
	a = (int *) malloc (n * sizeof(int)); 
	//Nhap day so
	for (i=0; i <n; i++)
	{
		printf ("Nhap a[%d]: ",i+1);
		scanf ("%d",&a[i]);
	}
	//In day so
	printf ("\nDay vua nhap:\n");
	for (i=0;i<n;i++)
		printf ("%d\t", a[i]);
	printf ("\n\n");
	//Ham nt
	if (nt(n)==0) printf ("%d KHONG phai la so nguyen to", n);
	else printf ("%d la so nguyen to", n);
	printf ("\n\n");
	
	//Ham ht
	if (ht(n)==1) printf ("%d la so hoan thien",n);
	else printf ("%d khong la so hoan thien",n);
	printf ("\n\n");
	
	//Nhap hai so a, b
	printf ("Nhap vao so a = ");
	scanf ("%d",&A);
	printf ("Nhap vao so b = ");
	scanf ("%d",&b);
	
	//Ham ucln
	printf ("UCLN(%d,%d) = %d", A, b, ucln (A,b));
	
	//Ham bcnn
	printf ("\nBCNN(%d,%d) = %d", A, b, bcnn (A,b));
	
	//Ham CacsoHT
	printf ("\nDay cac so hoan thien nho hon %d la:\n", n);
	CacSoHT (n);
	
	
	//Ham CacSNT
	printf ("\nDay cac so nguyen to nho hon %d la:\n", n);
	CacSNT (n);
	
	//Ham bcnn_ds
	printf ("\nBCNN cua day so la: %d", bcnn_ds(a,n));
	
	//Giai phong bo nho
	free (a);
	getch();
}
