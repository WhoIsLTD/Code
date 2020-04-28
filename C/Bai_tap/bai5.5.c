#include <stdio.h>
#include <string.h>
typedef struct
{
	char hoten [30];
	float luanan;
	float phanbien;
	float baove;
	float tbc;
} sinhvien;
void main ()
{
	int n, i = 0, j;
	sinhvien sv[100], temp;
	float max;
	
	//Nhap danh sach sinh vien
	printf ("Nhap danh sach ket qua bao ve tot nghiep: ");
	do
	{
		printf ("\nHo ten sinh vien: ");
		fflush (stdin); gets (sv[i].hoten);
		if (strcmp (sv[i].hoten,"*") != 0)
		{
			printf ("Diem luan an: "); 
			fflush (stdin); scanf ("%f", &sv[i].luanan);
			printf ("Diem phan bien: "); 
			fflush (stdin); scanf ("%f", &sv[i].phanbien);
			printf ("Diem bao ve luan an: "); 
			fflush (stdin); scanf ("%f", &sv[i].baove);
			//Diem trung binh
			sv[i].tbc = (sv[i].luanan + sv[i].phanbien + sv[i].baove)/3;
			i++;
		}
	} while (i<=200 && strcmp (sv[i].hoten,"*") != 0);
	n=i;
	max = sv[0].tbc;
	//Sap xep theo thu tu giam dtb va tim diem tbc max
	printf ("\nDanh sach sinh vien voi diem trung binh giam dan:\n");
	for (i=0; i<n; i++)
	{
		for (j=i+1; j<n; j++)
			if (sv[i].tbc<sv[j].tbc)
			{
				temp = sv[i]; sv[i] = sv[j]; sv[j] = temp;
			}	
		if (max<sv[i].tbc)
			max = sv[i].tbc;
	}
		
	//In danh sach sinh vien diem giam dan
	for (i=0; i<n; i++)
		printf ("[%d]: Ho ten: %s\tDiem luan an: %.2f\tDiem phan bien: %.2f\tDiem bao ve luan an: %.2f\tDiem trung binh: %.2f\n",
		i+1, sv[i].hoten, sv[i].luanan, sv[i].phanbien, sv[i].baove, sv[i].tbc);
	
	//In danh sach sinh vien co dtb cao nhat
	printf ("\nDanh sach sinh vien co diem trung binh cao nhat la: %.2f", max);
	for (i=0; i<n; i++)
		if (sv[i].tbc == max)
			printf ("\nHo ten: %s", sv[i].hoten);
			
}
