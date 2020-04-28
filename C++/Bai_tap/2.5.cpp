#include <iostream>
#include <cmath>
using namespace std;
class sophuc
{
    float pt, pa;

public:
    void NhapSP();
    void InSP();
    sophuc operator+(sophuc &);
};
//========================
void sophuc ::NhapSP()
{
    cout << "Nhap phan thuc: ";
    cin >> pt;
    cout << "Nhap phan ao: ";
    cin >> pa;
}
//========================
void sophuc ::InSP()
{
    if (pa < 0)
        cout << pt << pa << "i" << endl;
    else
        cout << pt << " + " << pa << "i" << endl;
}
//========================
sophuc sophuc ::operator+(sophuc &a)
{
    sophuc c;
    c.pt = a.pt + pt;
    c.pa = a.pa + pa;
    return c;
}
int main()
{
    sophuc a, b, c;
    a.NhapSP();
    cout << "\nSo phuc nhap vao:\n";
    a.InSP();
    b.NhapSP();
    b.InSP();
    c = a + b;
    cout << "tong 2 so phuc a, b: ";
    c.InSP();
}