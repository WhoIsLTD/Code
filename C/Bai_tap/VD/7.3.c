#include <stdio.h>
typedef struct
{
    char ho[10];
    char tendem[10];
    char ten[10];
} hoten;
typedef struct
{
    char xa[10];
    char huyen[10];
    char tinh[10];
} quequan;
typedef struct
{
    float toan;
    float ly;
    float hoa;
} diemthi;
typedef struct
{
    char truong[30];
    int tuoi;
    int sbd;
    hoten;
    quequan;
    diemthi;
} sinhvien;
void main()
{
    int n, i, j;
    sinhvien sv[100];
    printf("nhap so luong sv:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("nhap vao sinh vien thu %d\n", i + 1);
        do
        {

            printf("ho:\n");
            fflush(stdin);
            gets(sv[i].ho);
            printf("ten dem:\n");
            fflush(stdin);
            gets(sv[i].tendem);
            printf("ten:\n");
            fflush(stdin);
            gets(sv[i].ten);
        } while (strcmp(sv[i].ho, "") == 0 || strcmp(sv[i].tendem, "") == 0 || strcmp(sv[i].ten, "") == 0);
        do
        {

            printf("xa:\n");
            fflush(stdin);
            gets(sv[i].xa);
            printf("huyen:\n");
            fflush(stdin);
            gets(sv[i].huyen);
            printf("tinh:\n");
            fflush(stdin);
            gets(sv[i].tinh);
            printf("truong:\n");
            fflush(stdin);
            gets(sv[i].truong);
        } while (strcmp(sv[i].xa, "") == 0 || strcmp(sv[i].huyen, "") == 0 || strcmp(sv[i].tinh, "") == 0 || strcmp(sv[i].truong, "") == 0);

        do
        {
            printf("nhap tuoi\n");
            fflush(stdin);
            scanf("%d", &sv[i].tuoi);
            printf("nhap sbd:\n");
            fflush(stdin);
            scanf("%d", &sv[i].sbd);
        } while(sv[i].tuoi <= 0 || sv[i].sbd <= 0);

        do
        {
            
            printf("toan:\n");
            scanf("%f", &sv[i].toan);
            printf("ly:\n");
            scanf("%f", &sv[i].ly);
            printf("hoa:\n");
            scanf("%f", &sv[i].hoa);
        } while (sv[i].toan < 0 || sv[i].toan > 10 || sv[i].ly < 0 || sv[i].ly > 10 || sv[i].hoa < 0 || sv[i].hoa > 10);
    }
    //Nhap diem chuan
    float chuan, s;
    printf("\nDiem chuan: ");
    scanf("%f", &chuan);

    //Danh sach thi sinh bi truot
    printf("\nDanh sach sinh vien bi truot:\n");
    for (i = 0; i < n; i++)
    {
        s = sv[i].toan + sv[i].ly + sv[i].hoa;
        if (s < chuan)
            printf("Ho ten: %s%s%s\tQue quan: %s%s%s\tSBD: %d\tDiem thi: Toan %f\tLy: %f\tHoa: %f\n", sv[i].ho, sv[i].tendem, sv[i].ten, sv[i].xa, sv[i].huyen, sv[i].tinh, sv[i].sbd, sv[i].toan, sv[i].ly, sv[i].hoa);
    }
}
