#include <iostream>
#include <math.h>
using namespace std;
class sophuc
{
    float pt, pa;

public:
    sophuc();
    void NhapSP();
    void InSP();
    sophuc operator+(sophuc);
    float TriTuyetDoi();
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
sophuc sophuc ::operator+(sophuc a)
{
    sophuc c;
    c.pt = a.pt + pt;
    c.pa = a.pa + pa;
    return c;
}
float sophuc :: TriTuyetDoi()
{
    float s, v;
    pt = pt * pt;
    pa = pa * pa;
    s = pt + pa;
    v = sqrt(s);
    return v;
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
    cout << "tri tuyet doi: " << c.TriTuyetDoi();
}