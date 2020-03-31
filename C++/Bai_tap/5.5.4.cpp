#include <iostream>
using namespace std;
class SanPham
{

public:
    char name[20];
    int namSX, giaThanh;
    void nhap();
    void in();
};
void SanPham ::nhap()
{
    cin.ignore();
    cout << "nhap ten SP: " << endl;
    cin.getline(name, 20);
    cout << "nhap nam SX: " << endl;
    cin >> namSX;
    cout << "nhap gia thanh: " << endl;
    cin >> giaThanh;
}
void SanPham ::in()
{

    cout << "ten SP: " << name << endl;
    cout << "nam SX: " << namSX << endl;
    cout << "gia thanh: " << giaThanh << endl;
}
class HoaDon : public SanPham
{
public:
    int soLuongBan, giaBan;
    void nhap();
    void in();
    int thanhTien();
    int thue();
    int lai();
};
void HoaDon ::nhap()
{
    SanPham ::nhap();
    cout << "nhap so luong ban: " << endl;
    cin >> soLuongBan;
    cout << "nhap gia ban: " << endl;
    cin >> giaBan;
}
void HoaDon ::in()
{
    SanPham ::in();
    cout << "nhap so luong ban: " << soLuongBan << endl;
    cout << "nhap gia ban: " << giaBan << endl;
    cout << "thanh tien: " << thanhTien() << endl;
    cout << "thue: " << thue() << endl;
    cout << "lai: " << lai() << endl;
}
int HoaDon ::thanhTien()
{
    return soLuongBan * giaBan;
}
int HoaDon ::thue()
{
    return 0.1 * thanhTien();
}
int HoaDon ::lai()
{
    return (giaBan - giaThanh) * soLuongBan - thue();
}
int main()
{
    int n, i, j, tong = 0;
    HoaDon *a;
    do
    {
        cout << "nhap so luong hoa don: " << endl;
        cin >> n;
    } while (n < 1);
    cout << "---------------------------" << endl;
    a = new HoaDon[n];
    for (i = 0; i < n; i++)
        a[i].nhap();
    for (i = 0; i < n - 1; i++)
        for (j = 1; j < n; j++)
            if (a[i].lai() < a[j].lai())
            {
                HoaDon temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    cout << "---------------------------" << endl;
    cout << "danh sach sau khi sap xep: " << endl;
    cout << "---------------------------" << endl;
    int max = 0, imax;
    for (i = 0; i < n; i++)
    {
        tong += a[i].thanhTien();
        a[i].in();
        if (max < a[i].thue())
            max = a[i].thue();
    }
    cout << "---------------------------" << endl;
    cout << "tong tien cac hoa don la: " << tong << endl;
    cout << "---------------------------" << endl;
    cout << "cac hoa don co thue cao nhat la: " << endl;
    for (i = 0; i < n; i++)
    {
        if (a[i].thue() == max)
            a[i].in();
    }
}
