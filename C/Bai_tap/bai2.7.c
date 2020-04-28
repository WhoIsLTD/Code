#include <stdio.h>
#include <math.h>
int main()
{
	int k, n, i, s=0;
	do
	{
		printf ("Nhap so n>=1: ");
		scanf ("%d",&n);
	}
	while (n<=1);
	//sai nhap lai n, so nguyen duong th� dieu kien la n<=0
	for(k=1;k<n;k++)
	{
		s=0;
		for (i=1;i<k;i++)
			if (k%i==0)
			s=s+i;
		if (s==k) printf ("%d ",k);
	}
}
