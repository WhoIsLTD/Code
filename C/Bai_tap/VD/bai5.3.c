#include <stdio.h>
#include <string.h>
typedef struct
{
	char ho [10];
	char tend [10];
	char ten [10];
} hoten;
typedef struct
{
	char xa [10];
	char huyen [10];
	char tinh [10];
} que;
typedef struct
{
	float toan;
	float ly;
	float hoa;
} diemm;
typedef struct
{
	hoten hten;
	que qq;
	char truong [30];
	int tuoi;
	char sbd [12];
	diemm diem;
} svien;
void main ()
{
	int n, i, j;
	svien sv[50], temp;
	float chuan, s;
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
			printf ("\n\nHo: ");
			fflush (stdin); gets (sv[i].hten.ho);
			printf ("Ten dem: ");
			fflush (stdin); gets (sv[i].hten.tend);
			printf ("Ten: ");
			fflush (stdin); gets (sv[i].hten.ten);
		} while (strcmp (sv[i].hten.ho,"") ==0 || strcmp (sv[i].hten.tend,"") ==0 || strcmp (sv[i].hten.ten,"") ==0);
		//Nhap que quan
		do 
		{
			printf ("\nQue quan: ");
			printf ("\nXa: ");
			fflush (stdin); gets (sv[i].qq.xa);
			printf ("Huyen: ");
			fflush (stdin); gets (sv[i].qq.huyen);
			printf ("Tinh: ");
			fflush (stdin); gets (sv[i].qq.tinh);
		} while (strcmp (sv[i].qq.xa,"") ==0 || strcmp (sv[i].qq.huyen,"") ==0 || strcmp (sv[i].qq.tinh,"") ==0);
		//Nhap truong
		do 
		{
			printf ("\nTruong: ");
			fflush (stdin); gets (sv[i].truong);
		} while (strcmp (sv[i].truong,"") ==0);
		//Nhap tuoi
		do
		{
			printf ("\nTuoi: "); fflush (stdin); scanf ("%f", &sv[i].tuoi);
		} while (sv[i].tuoi<=0 );
		//Nhap so bao danh
		do 
		{
			printf ("\nSo bao danh: ");
			fflush (stdin);
			gets (sv[i].sbd);
		} while (strcmp (sv[i].sbd,"") ==0);
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
	//Nhap diem chuan
	do
	{
		printf ("\nDiem chuan: "); scanf ("%f", &chuan);
	} while (chuan<0 || chuan>30);
		
	//Danh sach thi sinh bi truot
	printf ("\n========================================\nDanh sach sinh vien bi truot:\n");
	for (i=0; i<n; i++)
		{
			s = sv[i].diem.toan + sv[i].diem.ly + sv[i].diem.hoa;
			if (s<chuan)
				printf ("[%d]: Ho ten: %s%s%s\tQue quan: %s%s%s\tSBD: %d\tDiem thi: Toan %f\tLy: %f\tHoa\n", i+1, sv[i].hten.ho, sv[i].hten.tend, sv[i].hten.ten, sv[i].qq.xa, sv[i].qq.huyen, sv[i].qq.tinh, sv[i].sbd, sv[i].diem.toan, sv[i].diem.ly, sv[i].diem.hoa);
		}
	
}

