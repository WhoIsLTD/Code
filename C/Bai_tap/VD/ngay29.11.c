#include <stdio.h>
#include <string.h>
typedef struct
{
	char msv [12];
	char hoten [30];
	int vang;
	float dtb;
} sivien;
void main ()
{
	int n, i, j;
	sivien sv[50], temp;
	do{
		printf ("Nhap so luong sinh vien: ");
		scanf ("%d", &n);
	} while (n<0 || n>50);
	//Nhap danh sach sinh vien
	for (i=0; i<n; i++)
	{
		printf ("\nSinh vien thu %d", i+1);
		do {
			printf ("\nMa so sinh vien: ");
			fflush (stdin); gets (sv[i].msv);
		} while (strcmp (sv[i].msv,"") ==0);
		
		do {
			printf ("Ho va ten: ");
			fflush (stdin); gets (sv[i].hoten);
		} while (strcmp (sv[i].hoten,"") ==0);
		
		printf ("So buoi nghi hoc: "); scanf ("%d", &sv[i].vang);
		do{
			printf ("Diem trung binh: "); scanf ("%f", &sv[i].dtb);
		} while (sv[i].dtb<0 || sv[i].dtb>10);
	}
	//In danh sach sinh vien
	printf ("\n========================================\nDanh sach sinh vien nhap vao:\n");
	for (i=0; i<n; i++)
		printf ("[%d]: MSV: %s\tHo ten: %s\tSo buoi nghi: %d\tDTB: %.2f\n", i+1, sv[i].msv, sv[i].hoten, sv[i].vang, sv[i].dtb);
	//In danh sach sinh vien bi cam thi
	printf ("\n========================================\nDanh sach sinh vien mien thi:\n");
	for (i=0; i<n; i++)
		if (sv[i].vang>3)
			printf ("[%d]: MSV: %s\tHo ten: %s\tSo buoi nghi: %d\n", i+1, sv[i].msv, sv[i].hoten, sv[i].vang, sv[i].dtb);
	//Sap xep sinh vien theo diem giam dan
	printf ("\n========================================\nSap xep sinh vien:\n");
	for (i=0; i<n; i++)
		for (j=i+1; j<n; j++)
			if (sv[i].dtb<sv[j].dtb)
			{
				temp = sv[i]; sv[i] = sv[j]; sv[j] = temp;
			}			
	//In danh sach sinh vien diem giam dan
	for (i=0; i<n; i++)
			printf ("[%d]: MSV: %s\tHo ten: %s\tSo buoi nghi: %d\tDTB: %.2f\n", i+1, sv[i].msv, sv[i].hoten, sv[i].vang, sv[i].dtb);
		
}
