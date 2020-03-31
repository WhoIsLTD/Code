#include <stdio.h>
#include <string.h>
typedef struct
{
	char ten[20];
	int count;
	long cost, tien;
} hanghoa;

void main ()
{
	int n, i=0, j, k;
	hanghoa hh[200], moi;
	printf ("Nhap thong tin hang hoa: ");
	do
	{
		printf ("\nTen hang: ");
		fflush (stdin); gets (hh[i].ten);
		if (strcmp (hh[i].ten,"*") != 0)
		{
			printf ("So luong: "); 
			fflush (stdin); scanf ("%d", &hh[i].count);
			printf ("Don gia: "); 
			fflush (stdin); scanf ("%ld", &hh[i].cost);
			//Thanh tien = so luong x don gia
			hh[i].tien = hh[i].count*hh[i].cost;
			i++;
		}
	} while (i<=200 && strcmp (hh[i].ten,"*") != 0);
	n=i;
	//Cac hang hoa co so luong nho nhat
	int min = hh[0].count;
	for (i=1; i<n; i++)
		if (min>hh[i].count)
			min = hh[i].count; //luu gia tri nho nhat
	//In ra
	printf ("\nCac hang hoa co so luong nho nhat la:\n");
	for (i=0; i<n; i++)
		if (hh[i].count == min)
			printf ("[%d]: Ten hang hoa: %s\tSo luong: %d\n", i, hh[i].ten, hh[i].count);
	//Hang hoa moi
	printf ("\nNhap vao mot hang hoa moi:");
	printf ("\nTen hang: ");
	fflush (stdin); gets (moi.ten);
	printf ("So luong: "); 
	fflush (stdin); scanf ("%d", &moi.count);
	printf ("Don gia: "); 
	fflush (stdin); scanf ("%ld", &moi.cost);
	moi.tien = moi.count*moi.cost;
	
	//Nhap vi tri can chen
	printf ("\nNhap vi tri can chen k = ");
	scanf ("%d", &k);
	 if(k < 0){
        k = 0;
    }
    // Neu pos >= n => Them vao cuoi
    else if(k > n){
        k = n;
    }
	for (i=n; i>k; i--)
		hh[i] = hh[i-1];
	hh[k] = moi;
	
	//In ra danh sach hang hoa moi
	long s = 0;
	printf ("\nDanh sach hang hoa moi la:\n");
	for (i=0; i<=n; i++)
	{
		printf ("[%d]: Ten hang hoa: %s\tSo luong: %d\tDon gia: %ld\n", i, hh[i].ten, hh[i].count, hh[i].cost);
		s = s + hh[i].tien;
	}
	//Tong gia tri hang hoa trong danh sach
	printf ("\nTong gia tri hang hoa trong danh sach la: %ld", s);
		
}

	
