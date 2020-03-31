#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
class sinh_vien
{
    char ho_ten[20], lop[10], gioi_tinh[10];
    int ngay_sinh;
    float toan, ly, hoa;

public:
    void Nhap();
    void In();
    float Diem_trung_binh();
};
void sinh_vien ::Nhap()
{
    cin.ignore();
    cout << "nhap ho va ten sinh vien: " << endl;
    cin.getline(ho_ten, 20);
    cout << "nhap lop: " << endl;
    cin.getline(lop, 10);
    cout << "nhap gioi tinh: " << endl;
    cin.getline(gioi_tinh, 10);
    cout << "nhap diem toan" << endl;
    cin >> toan;
    cout << "nhap diem ly" << endl;
    cin >> ly;
    cout << "nhap diem hoa" << endl;
    cin >> hoa;
};
void sinh_vien ::In()
{
    cout << "Ho va ten: " << ho_ten << ", Gioi tinh: " << gioi_tinh << ", lop: " << lop << endl;
    cout << "diem toan: " << toan << ", diem ly: " << ly << ", diem hoa: " << hoa << endl;
};
float sinh_vien ::Diem_trung_binh()
{
    float s = 0;
    s = (toan + ly + hoa) / 3;
    return s;
}
int main()
{
    sinh_vien *sv, temp;
    int i, j, n;
    cout << setiosflags(ios ::showpoint) << setprecision(2);
    cout << "nhap so luong sinh vien: " << endl;
    cin >> n;
    sv = new sinh_vien[n];
    for (i = 0; i < n; i++)
    {
        sv[i].Nhap();
    }
    for (i = 0; i < n; i++)
    {
        sv[i].In();
        cout << "diem trung binh cua sinh vien thu " << i + 1 << " la: " << sv[i].Diem_trung_binh() << endl
             << endl;
    }
    for (i = 0; i < n - 1; i++)
        for (j = 1; j < n; j++)
            if (sv[i].Diem_trung_binh() < sv[j].Diem_trung_binh())
            {
                temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
    cout << "----------------------------------------" << endl;
    cout << "Danh sach sinh vien sau khi sap xep la: " << endl
         << endl;
    for (i = 0; i < n; i++)
    {
        sv[i].In();
        cout << "diem trung binh cua sinh vien thu " << i + 1 << " la: " << sv[i].Diem_trung_binh() << endl
             << endl;
    }
}
