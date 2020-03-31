#include <iostream>
using namespace std;
class hoadon
{
    char mvt[10], name[20], loai_phieu[10];
    float ngay_lap, kl, don_gia, thanh_tien;

public:
    void nhap();
    void in();
    float thanhtien();
};
void hoadon ::nhap()
{
    cin.ignore();
    cout << "nhap ma vat tu: " << endl;
    cin.getline(mvt, 10);
    cout << "nhap ten vat tu: " << endl;
    cin.getline(name, 20);
    cout << "nhap loai phieu: " << endl;
    cin.getline(loai_phieu, 10);
    cout << "nhap ngay lap: " << endl;
    cin >> ngay_lap;
    cout << "nhap khoi luong: " << endl;
    cin >> kl;
    cout << "nhap don gia: " << endl;
    cin >> don_gia;
    cout << endl;
}
void hoadon ::in()
{
    cout << "ma vat tu la: " << mvt << ", ten vat tu la: " << name << ", loai phieu la: " << loai_phieu << endl
         << "ngay lap la: " << ngay_lap << ", khoi luong la: " << kl << ", don gia la: " << don_gia << endl;
}
float hoadon ::thanhtien()
{
    thanh_tien = kl * don_gia;
    return thanh_tien;
}
int main()
{
    int n, s = 0;
    hoadon *a;
    do
    {
        cout << "nhap vao so luong hoa don: ";
        cin >> n;
    } while (n <= 0);
    a = new hoadon[n];
    for (int i = 0; i < n; i++)
    {
        a[i].nhap();
    }
    cout << "--------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        a[i].in();
        cout << "thanh tien: " << a[i].thanhtien() << endl
             << endl;
    }

    for (int i = 0; i < n; i++)
    {
        s += a[i].thanhtien();
    }
    cout << "tong thanh tien la: " << s << endl;
}