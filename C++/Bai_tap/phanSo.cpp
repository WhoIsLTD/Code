#include <iostream>
using namespace std;

class PhanSo
{
private:
    int tu, mau;

public:
    void nhap();
    void in();
    PhanSo operator+(PhanSo b);
};
void PhanSo ::nhap()
{
    cout << "nhap vao tu so: ";
    cin >> tu;
    cout << "nhap vao mau so: ";
    cin >> mau;
}
void PhanSo ::in()
{
    cout << tu << "/" << mau << endl;
}
PhanSo PhanSo :: operator+(PhanSo b)
{
    PhanSo x;
    x.tu = tu * b.mau + b.tu * mau;
    x.mau = mau * b.mau;
    return x;

}
int main()
{
    PhanSo a, b, x;
    a.nhap();
    a.in();
    b.nhap();
    b.in();
    x = a.operator+(b);
    x.in();
}
