#include <iostream>

using namespace std;
class Nguoi
{
public:
    char hoTen[20], maSo[20];
    int luong;
    virtual int tinhLuong();
    virtual void nhap();
    virtual void in();
}

void Nguoi ::nhap()
{
    cin.ignore();
    cout << "Nhap ho va ten: " << endl;
    cin.getline(hoTen, 20);

    cout << "Nhap ma so : " << endl;
    cin.getline(maSo, 20);
}
void Nguoi ::in()
{
    cout << "ho va ten: " << hoTen << endl;
    cout << "Ma so: " << maSo << endl;
    cout << "luong: " << luong << endl;
}
int Nguoi ::tinhLuong()
{
    return luong;
}
class BC : public Nguoi
{
    int heSoLuong, phuCap;

public:
    void nhap();
    // void in();
    int tinhLuong();
};
void BC ::nhap()
{
    Nguoi ::nhap();
    cout << "Nhap vao he so luong: " << endl;
    cin >> heSoLuong;
    cout << "Nhap vao phu cap: " << endl;
    cin >> phuCap;
}
int BC ::tinhLuong()
{
    return luong = heSoLuong * 120 + phuCap;
}
class HD : public Nguoi
{
    int tienCong, soNgay, vuotGio;

public:
    void nhap();
    //void in();
    int tinhLuong();
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
}

int HD ::tinhLuong()
{
    return luong = tienCong * soNgay + (vuotGio * soNgay);
}
int main()
{
    int n, m, i, x = 0, y = 0;
    Nguoi *a[100];
    cout << "nhap vao so luong nguoi: " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Choose: 1.HD, 2.BC: " << endl;
        cin >> m;
        if (m == 1)
        {
            a[i] = new HD();
            cout << "nhap vao tt nvien HD: " << endl;
            a[i]->nhap();
            a[i]->tinhLuong();
        }
        else
        {
            a[i] = new BC();
            cout << "nhap thong tin nvien BC: " << endl;
            a[i]->nhap();
            a[i]->tinhLuong();
        }
    }

    cout << "------------------------------" << endl;
    cout << "danh sach:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "nhan vien " << i << ":" << endl;
        a[i]->in();
    }
}
