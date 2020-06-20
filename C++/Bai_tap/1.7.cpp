#include <iostream>
#include <cstring>
using namespace std;
struct sinhvien
{
    char hoten[30];
    float dtoan, dly, dhoa, dtb;
};
void nhapSV(sinhvien sv[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        do
        {
            cout << "Nhap ho va ten: ";
            fflush(stdin);
            cin.getline(sv[i].hoten, 30);
        } while (strcmp(sv[i].hoten, "") == 0);
        do
        {
            cout << "Diem toan: ";
            cin >> sv[i].dtoan;
        } while (sv[i].dtoan < 0 || sv[i].dtoan > 10);
        do
        {
            cout << "Diem ly: ";
            cin >> sv[i].dly;
        } while (sv[i].dly < 0 || sv[i].dly > 10);

        do
        {
            cout << "Diem hoa: ";
            cin >> sv[i].dhoa;
        } while (sv[i].dhoa < 0 || sv[i].dhoa > 10);
        do
        {
            cout << "Diem trung binh: ";
            cin >> sv[i].dtb;
        } while (sv[i].dtb < 0 || sv[i].dtb > 10);
    }
}
void InSV(sinhvien sv[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << "[" << i + 1 << "]: Ho ten: " << sv[i].hoten << "\t dtoan: " << sv[i].dtoan << "\t dly," << sv[i].dly << "\t dhoa: " << sv[i].dhoa << "\t dtb: " << sv[i].dtb << endl;
}
sinhvien Sapxep(sinhvien sv[], int n)
{
    sinhvien tg;
    int i, j;
    //Sap xep sinh vien theo diem giam dan
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (sv[i].dtb < sv[j].dtb)
            {
                tg = sv[i];
                sv[i] = sv[j];
                sv[j] = tg;
            }
}
int main()
{
    sinhvien sv[50];
    int n;
    do
    {
        cout << "nhap so luong sinh vien";
        cin >> n;
    } while (n <= 0 || n > 50);
    cout << "\nnhap danh sach sinh vien\n";
    nhapSV(sv, n);
    InSV(sv, n);
    cout << "Danh sach sinh vien sap xep giam dan la:\n";
    Sapxep(sv, n);
    InSV(sv, n);
}
