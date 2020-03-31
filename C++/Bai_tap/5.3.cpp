#include <iostream>
#include <cstring>

using namespace std;
class Nguoi
{
public:
    char hTen[20], maSo[20];
    int luong;
    void nhap();
    void in();
};

void Nguoi ::nhap()

{
    cout << "Nhap ho va ten: " << endl;
    cin >> hTen;

    cout << "Nhap ma so : " << endl;
    cin >> maSo;
}
void Nguoi ::in()
{
    cout << "ho va ten: " << hTen << endl;
    cout << "Ma so: " << maSo << endl;
    cout << "luong: " << luong << endl;
}
class BC : public Nguoi
{
    int heSoLuong, phuCap;

public:
    void nhap();
    void in();
};
void BC ::nhap()
{
    Nguoi ::nhap();
    cout << "Nhap vao he so luong: " << endl;
    cin >> heSoLuong;
    cout << "Nhap vao phu cap: " << endl;
    cin >> phuCap;
    luong = (heSoLuong + phuCap) * 1390;
}
class HD : public Nguoi
{
    int tienCong, soNgay, vuotGio;

public:
    void nhap();
    void in();
};

void HD ::nhap()
{
    Nguoi ::nhap();
    cout << "tien cong lao dong :" << endl;
    cin >> tienCong;
    do
    {
        cout << "so ngay lam viec trong thang la: " << endl;
        cin >> soNgay;
    } while (soNgay < 0 || soNgay > 31);
    cout << "he so vuot gio: " << endl;
    cin >> vuotGio;
    luong = tienCong * soNgay * (1 + vuotGio);
}
int main()
{
    int n, m, i, x = 0, y = 0;
    Nguoi a[100];
    BC b;
    HD h;
    cout << "nhap vao so luong nguoi: " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Choose: 1.HD, 2.BC: " << endl;
        cin >> m;
        if (m == 1)
        {
            cout << "nhap vao nguoi HD: " << endl;
                h.nhap();
                a[i] = h;
        }
        else
        {
            cout << "nhap thong tin nguoi BC: " << endl;
                b.nhap();
                a[i] = b;
        }
    }

    cout << "------------------------------" << endl;
    cout << "danh sach:" << endl;
    for (i = 0; i < n; i++)
        a[i].in();
}
