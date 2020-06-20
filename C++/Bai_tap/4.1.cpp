#include <iostream>
using namespace std;

class phanso
{
    float ts, ms;

public:
    phanso operator+(phanso b);
    phanso operator-(phanso b);
    phanso operator*(phanso b);
    phanso operator/(phanso b);
    friend ostream &operator<<(ostream &out, phanso a);
    friend istream &operator>>(istream &in, phanso &a);
    void Toi_Gian();
    int operator<(phanso a);
};
istream &operator>>(istream &in, phanso &a)
{
    cout << "nhap vo tu so: " << endl;
    in >> a.ts;
    do
    {
        cout << "nhap vo mau so: " << endl;
        in >> a.ms;
    } while (a.ms == 0);
}

ostream &operator<<(ostream &out, phanso a)
{
    out << a.ts << "/" << a.ms << endl;
}

void phanso ::Toi_Gian()
{
    float t, m;
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
phanso phanso ::operator+(phanso b)
{
    phanso c;
    c.ts = ts * b.ms + b.ts * ms;
    c.ms = ms * b.ms;
    return c;
}
phanso phanso ::operator-(phanso b)
{
    phanso c;
    c.ts = ts * b.ms - b.ts * ms;
    c.ms = ms * b.ms;
    return c;
}
phanso phanso ::operator*(phanso b)
{
    phanso c;
    c.ts = ts * b.ts;
    c.ms = ms * b.ms;
    return c;
}
phanso phanso ::operator/(phanso b)
{
    phanso c;
    c.ts = ts * b.ms;
    c.ms = ms * b.ts;
    return c;
}
int main()
{

    phanso a, b, c;

    cin >> a;
    cin >> b;

    a.Toi_Gian();
    b.Toi_Gian();

    cout << "phan so 1 la: " << a;
    cout << "phan so 2 la:" << b;
    c = a + b;
    c.Toi_Gian();
    cout << "tong 2 phan so a, b la: " << c;
}
