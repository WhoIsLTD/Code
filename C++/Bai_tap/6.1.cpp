#include <iostream>
using namespace std;
class Nguoi
{
public:
    char maSo[20], hoTen[20];
    virtual void nhap();
    virtual void in();
    virtual void duocKhenThuong();
};
void Nguoi ::nhap()
{
    cin.ignore();
    cout << "nhap ho ten: " << endl;
    cin.getline(hoTen, 20);
    cout << "nhap ma so: " << endl;
    cin.getline(maSo, 20);
}
void Nguoi ::in()
{
    cout << "ho va ten: " << hoTen << endl;
    cout << "ma so: " << maSo << endl;
}
void Nguoi ::duocKhenThuong()
{
    cout << "duoc khen thuong" << endl;
}
class SinhVien : public Nguoi
{

public:
    int diemTB;
    void nhap();
    void in();
    void duocKhenThuong();
};
void SinhVien ::nhap()
{
    Nguoi ::nhap();
    cout << "nhap diem trung binh: " << endl;
    cin >> diemTB;
}
void SinhVien ::in()
{

    Nguoi ::in();
    cout << "diem trung binh la: " << diemTB << endl;
}
void SinhVien ::duocKhenThuong()
{
    if (diemTB > 8)
        cout << "sinh vien duoc khen thuong" << endl;
    else
        cout << "sinhvien khong duoc khen thuong" << endl;
}
class GiangVien : public Nguoi
{
public:
    int soBB;
    void nhap();
    void in();
    void duocKhenThuong();
};
void GiangVien ::nhap()
{
    Nguoi ::nhap();
    cout << "nhap dso bai bao: " << endl;
    cin >> soBB;
}
void GiangVien ::in()
{

    Nguoi ::in();
    cout << "so bai bao la: " << soBB << endl;
}
void GiangVien ::duocKhenThuong()
{
    if (soBB > 5)
        cout << "giang vien duoc khen thuong" << endl;
    else
        cout << "giang vien khong duoc khen thuong" << endl;
}
int main()
{
    int n, m, i = 0;
    Nguoi *nguoi[100];
    cout << "nhap vao so luong sv, gv" << endl;
    cin >> n;
    while (i < n)
    {
        cout << "choose (1.Sv, 2.Gv): " << endl;
        cin >> m;
        cout << "nguoi thu " << i + 1 << ": " << endl;
        if (m == 1)
        {
            nguoi[i] = new SinhVien();
            nguoi[i]->nhap();
        }
        else
        {
            nguoi[i] = new GiangVien();
            nguoi[i]->nhap();
        }
        i++;
    }

    cout << "------------------------------" << endl;
    cout << "danh sach: " << endl;
    for (i = 0; i < n; i++)
    {
        nguoi[i]->in();
        nguoi[i]->duocKhenThuong();
        cout << "-------------------" << endl;
    }
}