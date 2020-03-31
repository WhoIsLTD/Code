#include <iostream>
#include <math.h>
using namespace std;

class phanso
{

public:
    int ts, ms;
    phanso Nhap();
    phanso In();
    void Toi_Gian();
    int operator<(phanso);
    int operator==(phanso);
};
class phanso1 : public phanso
{
public:
    phanso1 operator+(phanso1 b);
    phanso1 operator-(phanso1 b);
    phanso1 operator*(phanso1 b);
};
phanso1 phanso1 ::operator+(phanso1 b)
{
    phanso1 c;
    c.ts = ts * b.ms + b.ts * ms;
    c.ms = ms * b.ms;
    return c;
}
phanso1 phanso1 ::operator-(phanso1 b)
{
    phanso1 c;
    c.ts = ts * b.ms - b.ts * ms;
    c.ms = ms * b.ms;
    return c;
}
phanso1 phanso1 ::operator*(phanso1 b)
{
    phanso1 c;
    c.ts = ts * b.ts;
    c.ms = ms * b.ms;
    return c;
}
//phuong thuc nhap
phanso phanso ::Nhap()
{
    cout << "Nhap tu so: " << endl;
    cin >> ts;
    do
    {
        cout << "Nhap mau so: " << endl;
        cin >> ms;
    } while (ms == 0);
}
//phuong thuc in
phanso phanso ::In()
{
    if (ts % ms == 0)
        cout << ts / ms << endl
             << endl;
    else
        cout << ts << "/" << ms << endl
             << endl;
}
//phuong thuc toi gian
void phanso ::Toi_Gian()
{
    int t, m;
    t = abs(ts);
    m = abs(ms);
    while (t != m)
    {
        if (t > m)
            t = t - m;
        else
        {
            m = m - t;
        }
    }
    ts = ts / t;
    ms = ms / m;
}
//phuong thuc so sanh 2 ps
int phanso ::operator<(phanso b)
{
    return ts / ms < b.ts / b.ms;
}
int phanso ::operator==(phanso b)
{
    return ts / ms == b.ts / b.ms;
}

int main()
{
    int n, i, j;
    phanso1 a, b, c;
    cout << "Phan so thu 1: " << endl;
    a.Nhap();
    cout << "phan so thu 1 la:" << endl;
    a.In();
    cout << "------------------------" << endl;
    cout << "Phan so thu 2: " << endl;
    b.Nhap();
    cout << "phan so thu 2 la:" << endl;
    b.In();
    cout << "------------------------" << endl;
    cout << "Tong 2 phan so a, b la: " << endl;
    c = a + b;
    c.In();
    cout << "Hieu 2 phan so a, b la: " << endl;
    c = a - b;
    c.In();
    cout << "Tich 2 phan so a, b la: " << endl;
    c = a * b;
    c.In();
    if (a < b)
        cout << " a < b" << endl;
    else if (a == b)
        cout << " a = b" << endl;
    else
        cout << " a > b" << endl;
}
