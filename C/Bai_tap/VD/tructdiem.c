#include <stdio.h>
#include <string.h>
typedef struct
{
	float toan;
	float ly;
	float hoa;
} DIEMTHI;
typedef struct
{
	char hodem [20];
	char ten [10];
	DIEMTHI diem;
} sinhvien;
void main ()
{
	int n, i, j;
	sinhvien sv[50], temp;
	//Nhap so sinh vien
	do
	{
		printf ("Nhap so luong sinh vien: ");
		scanf ("%d", &n);
	} while (n<0 || n>50);
	//Nhap danh sach sinh vien
	for (i=0; i<n; i++)
	{
		printf ("\nSinh vien thu %d", i+1);
		//Nhap ho ten
		do 
		{
			printf ("\n\nHo dem: ");
			fflush (stdin); gets (sv[i].hodem);
			printf ("Ten: ");
			fflush (stdin); gets (sv[i].ten);
		} while (strcmp (sv[i].hodem,"") ==0 || strcmp (sv[i].ten,"") ==0);
		//Nhap diem thi
		do
		{
			printf ("\nDiem thi: ");
			printf ("\nToan: ");
			fflush (stdin);
			scanf ("%f", &sv[i].diem.toan);
			printf ("Ly: "); 
			fflush (stdin); 
			scanf ("%f", &sv[i].diem.ly);
			printf ("Hoa: "); 
			fflush (stdin); 
			scanf ("%f", &sv[i].diem.hoa);
		} while (sv[i].diem.toan<0 || sv[i].diem.toan>10 || sv[i].diem.ly<0 || sv[i].diem.ly>10 || sv[i].diem.hoa<0 || sv[i].diem.hoa>10);
	}
	//Sap xep sinh vien theo a-z
	printf ("\nDanh sach sinh vien theo a-z:\n");
	for (i=0; i<n; i++)
		for (j=i+1; j<n; j++)
			if (strcmp(sv[i].ten,sv[j].ten)>0)
			{
				temp = sv[i]; sv[i] = sv[j]; sv[j] = temp;
			}			
	//In danh sach sinh vien theo a-z
	for (i=0; i<n; i++)
			printf ("[%d]: Ho ten: %s %s\tDiem toan: %.2f\tDiem ly: %.2f\tDiem hoa: %.2f\n",
				i+1, sv[i].hodem, sv[i].ten, sv[i].diem.toan, sv[i].diem.ly, sv[i].diem.hoa);
}
	
