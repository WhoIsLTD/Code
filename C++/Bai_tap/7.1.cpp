#include <iostream>
using namespace std;
class phanso
{
private:
    int ts, ms;

public:
    phanso operator+(phanso p);
    friend ostream &operator<<(ostream &mh, phanso p);
    friend istream &operator>>(istream &bp, phanso &p);
};

phanso phanso::operator+(phanso p)
{
    phanso c;
    c.ts = ts * p.ms + p.ts * ms;
    c.ms = ms * p.ms;
    return c;
}

ostream &operator<<(ostream &mh, phanso p)
{
    mh << p.ts << "/" << p.ms;
    return mh;
}

istream &operator>>(istream &bp, phanso &p)
{
    cout << "Nhap tu so: ";
    bp >> p.ts;
    cout << "Nhap mau so: ";
    bp >> p.ms;
    return bp;
}

template <class T>
T summ(T *a, int n)
{
    T s = a[0];
    for (int i = 1; i < n; i++)
        s = s + a[i];
    return s;
}

int main()
{
    int a[10], n;
    phanso b[10];
    cout << "Nhap n " << endl;
    cin >> n;
    cout << "Nhap so nguyen: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << (i + 1) << "]=";
        cin >> a[i];
    }
    cout << "Nhap phan so: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << "tong cac so nguyen la: " << endl;
    cout << summ(a, n) << endl;

    cout << "Tong cac phan so la: " << endl;
    cout << summ(b, n);
}
