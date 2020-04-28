#include <iostream>
#include <math.h>
using namespace std;
class sophuc
{
    float pt, pa;

public:
    sophuc();
    sophuc operator+(sophuc);
    float TriTuyetDoi();
    friend ostream &operator<<(ostream &out, sophuc &p);
    friend istream &operator>>(istream &in, sophuc &p);
};
sophuc ::sophuc()
{
    pt = pa;
}

istream &operator>>(istream &in, sophuc &a)
{
    cout << "Nhap phan thuc: ";
    cin >> a.pt;
    cout << "Nhap phan ao: ";
    cin >> a.pa;
    return in;
}

ostream &operator<<(ostream &out, sophuc &a)
{
    if (a.pa < 0)
        cout << a.pt << a.pa << "i" << endl;
    else
        cout << a.pt << " + " << a.pa << "i" << endl;
    return out;
}

sophuc sophuc ::operator+(sophuc b)
{
    sophuc c;
    c.pt = pt + b.pt;
    c.pa = pa + b.pa;
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
    sophuc a, b, c;

    cin >> a;
    cin >> b;
    cout << "\nSo phuc nhap vao:\n";
    cout << a;
    cout << b;
    c = a + b;
    cout << "tong 2 so phuc a, b: ";
    cout << c;
    cout << "tri tuyet doi: " << c.TriTuyetDoi();
}