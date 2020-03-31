#include <iostream>
using namespace std;
class Nguoi
{
public:
    char maSo[20], hoTen[20];
    void nhap();
    void in();
};
void Nguoi ::nhap()
{
    cout << "nhap ho ten: " << endl;
    cin >> hoTen;
    cout << "nhap ma so: " << endl;
    cin >> maSo;
}
void Nguoi ::in()
{
    cout << "ho va ten: " << hoTen << endl;
    cout << "ma so: " << maSo << endl;
}

class SinhVien : public Nguoi
{

public:
    int diemTB;
    void nhap();
    void in();
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
class GiangVien : public Nguoi
{
public:
    int soBB;
    void nhap();
    void in();
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

int main()
{
    int n, m, i = 0, j = 0, x = 0, y = 0;
    SinhVien s[100];
    GiangVien g[100];
    cout << "nhap vao so luong sv, gv" << endl;
    cin >> n;
    while (i < n && j < n)
    {
        cout << "choose (1.Sv, 2.Gv): " << endl;
        cin >> m;
        if (m == 1)
        {
            cout << "sinh vien thu " << i + 1 << ": " << endl;
            s[i].nhap();
            x++;
        }
        else
        {
            cout << "giang vien thu " << j + 1 << ": " << endl;
            g[j].nhap();
            y++;
        }
        i++, j++;
    }

    cout << "------------------------------" << endl;
    cout << "Sinh vien: " << endl;
    for (i = 0; i < x; i++)
    {
        if (s[i].diemTB > 8)
        {
            s[i].in();
        }
    }
    cout << "------------------------------" << endl;
    cout << "Giang vien: " << endl;
    
    for (i = 0; i < y; i++)
    {
        if (g[i].soBB > 5)
        {
            g[i].in();
        }
    }
}