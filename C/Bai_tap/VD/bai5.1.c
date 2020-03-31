#include <stdio.h>
#include <string.h>
typedef struct
{
	char hoten [30];
	float diem;
} sivien;
void main ()
{
	int n, i, j;
	sivien sv[50], temp;
	do
	{
		printf ("Nhap so luong sinh vien: ");
		scanf ("%d", &n);
	} while (n<0 || n>50);
	
	//Nhap danh sach sinh vien
	for (i=0; i<n; i++)
	{
		printf ("\nSinh vien thu %d", i+1);
		do 
		{
			printf ("\nHo va ten: ");
			fflush (stdin); gets (sv[i].hoten);
		} while (strcmp (sv[i].hoten,"") == 0);
		
		do
		{
			printf ("Diem trung binh: "); scanf ("%f", &sv[i].diem);
		} while (sv[i].diem<0 || sv[i].diem>10);
	}
	//In danh sach sinh vien
	printf ("\n========================================\nDanh sach sinh vien nhap vao:\n");
	for (i=0; i<n; i++)
		printf ("[%d]: Ho ten: %s\tDiem: %.2f\n", i+1, sv[i].hoten, sv[i].diem);
	
	//Sap xep sinh vien theo diem giam dan
	printf ("\nDanh sach sinh vien diem giam dan:\n");
	for (i=0; i<n; i++)
		for (j=i+1; j<n; j++)
			if (sv[i].diem<sv[j].diem)
			{
				temp = sv[i]; sv[i] = sv[j]; sv[j] = temp;
			}			
	//In danh sach sinh vien diem giam dan
	for (i=0; i<n; i++)
			printf ("[%d]: Ho ten: %s\tDiem: %.2f\n", i+1, sv[i].hoten, sv[i].diem);
	
	//Tinh diem trung binh
	float s = 0;
	for (i=0; i<n; i++)
		s = s + sv[i].diem;
	printf ("\nDiem trung binh cua lop la S = %.2f", s/n);
	
	//Tinh ti le phan tram gioi kha trung binh kem
	int g=0, k=0, tb=0, y=0, kem=0;
	for (i=0; i<n; i++)
	{
		if (sv[i].diem>=8.0)
			g = g + 1;
		else if (sv[i].diem>=6.5)
			k = k + 1;
		else if (sv[i].diem>=5.0)
			tb = tb + 1;
		else if (sv[i].diem>=4.0)
			y = y + 1;
		else
			kem = kem + 1;
	} 
	printf ("\nTi le hoc sinh gioi: %.2f%%", g*100.0/n);
	printf ("\nTi le hoc sinh kha: %.2f%%", k*100.0/n);
	printf ("\nTi le hoc sinh trung binh: %.2f%%", tb*100.0/n);
	printf ("\nTi le hoc sinh yeu: %.2f%%", y*100.0/n);
	printf ("\nTi le hoc sinh kem: %.2f%%", kem*100.0/n);	
}
