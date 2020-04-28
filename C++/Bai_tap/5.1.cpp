#include <iostream>
#include <math.h>
using namespace std;
class sophuc
{
public:
    float pt, pa;

    void NhapSP();
    void InSP();
    float TriTuyetDoi();
};
class sophuc1 : public sophuc
{
public:

    sophuc1 operator+(sophuc1);
    sophuc1 operator-(sophuc1);
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
sophuc1 sophuc1 ::operator+(sophuc1 b)
{
    sophuc1 c;
    c.pt = pt + b.pt;
    c.pa = pa + b.pa;
    return c;
}
sophuc1 sophuc1 ::operator-(sophuc1 b)
{
    sophuc1 c;
    c.pt = pt - b.pt;
    c.pa = pa - b.pa;
    return c;
}
float sophuc ::TriTuyetDoi()
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
    sophuc1 a, b, c;
    a.NhapSP();
    cout << "\nSo phuc nhap vao:\n";
    a.InSP();
    b.NhapSP();
    b.InSP();
    c = a + b;
    cout << "tong 2 so phuc a, b: ";
    c.InSP();
    cout << "tri tuyet doi: " << c.TriTuyetDoi();
    c = a - b;
    cout << "hieu 2 so phuc a, b: ";
    c.InSP();
    cout << "tri tuyet doi: " << c.TriTuyetDoi();
}