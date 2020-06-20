#include <iostream>
using namespace std;
class Nguoi
{
protected:
    char hoTen[30];
    int namSinh;

public:
    void nhap();
    void in();
};
class BenhNhan : public Nguoi
{
protected:
    char tenBenhAn[30];
    int soNgayNamVien, tuoi, vienPhi;

public:
    void nhap();
    void in();
    int tinhTuoi();
    int tinhVienPhi();
};
void Nguoi ::nhap()
{
    cin.ignore();
    cout << "nhap vao ho ten: " << endl;
    cin.getline(hoTen, 30);
    cout << "nhap vao nam sinh: " << endl;
    cin >> namSinh;
}
void Nguoi ::in()
{
    cout << "ho ten: " << hoTen << endl;
    cout << "nam sinh: " << namSinh << endl;
}

void BenhNhan ::nhap()
{
    Nguoi ::nhap();
    cin.ignore();
    cout << "nhap vao ten benh an: " << endl;
    cin.getline(tenBenhAn, 30);
    cout << "nhap vao so ngay nam vien: " << endl;
    cin >> soNgayNamVien;
    
    
}
int BenhNhan ::tinhTuoi()
{
    tuoi = 2017 - namSinh;
    return tuoi;
}
int BenhNhan ::tinhVienPhi()
{
    vienPhi = soNgayNamVien * 150000;
    return vienPhi;
}
void BenhNhan ::in()
{
    Nguoi ::in();
    cout << "ten benh an: " << tenBenhAn << endl;
    cout << "so ngay nam vien: " << soNgayNamVien << endl;
    cout << "tuoi hien tai: " << tinhTuoi() << endl;
    cout << "tien vien phi: " << tinhVienPhi() << endl;
}
int main()
{
    int n;
    BenhNhan *bn;
    do
    {
        cout << "nhap vao so luong benh nhan: " << endl;
        cin >> n;
    } while (n < 0 || n > 100);
    bn = new BenhNhan[n];
    for (int i = 0; i < n; i++)
    {
        cout << "nhap vao benh nhan thu " << i+1 << " : " << endl;
        bn[i].nhap();
    }
    cout << "\n____________________________________\n";
    cout << "benh nhan nho hon 10 tuoi la: " << endl;
    int max = bn[0].tinhVienPhi();
    for (int i = 0; i < n; i++)
    {
        if (bn[i].tinhTuoi() <= 10)
        {
            cout << "thong tin benh nhan thu " << i+1 << " : " << endl;
            bn[i].in();
        }
        if(bn[i].tinhVienPhi() > max)
            max = bn[i].tinhVienPhi();
    }
    cout << "\n____________________________________\n";
    cout << "cac benh nhan co tien vien phi cao nhat la: " << endl;
    
    for (int i = 0; i < n; i++)
    {
        if(bn[i].tinhVienPhi() == max)
            bn[i].in();
    }
    
}
