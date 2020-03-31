#include <iostream>
using namespace std;
int dt = 0;
class Hinh
{
protected:
    int chieuRong, chieuCao;

public:
    Hinh(int a = 0, int b = 0)
    {
        chieuRong = a;
        chieuCao = b;
    }
    virtual int dienTich()
    {
        cout << " Dien tich cua lop cha: " << endl;
        return 0;
    }
};
class HinhChuNhat : public Hinh
{
public:
    HinhChuNhat(int a = 0, int b = 0) : Hinh(a, b) {}
    int dienTich()
    {
        dt = (chieuCao * chieuRong);
        cout << "Dien tich cua lop HinhChuNhat la: " << dt << endl;
    }
};
class TamGiac : public Hinh
{
public:
    TamGiac(int a = 0, int b = 0) : Hinh(a, b) {}
    int dienTich()
    {
        dt = (chieuCao * chieuRong) / 2;
        cout << "Dien tich cua lop TamGiac la: " << dt << endl;
    }
};
int main()
{
    Hinh *hinh;
    HinhChuNhat hcn(13, 6);
    TamGiac tag(8, 9);
    hinh = &hcn;
    hinh -> dienTich();
    hinh = &tag;
    hinh -> dienTich();
    return 0;
}
