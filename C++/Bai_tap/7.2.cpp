#include <iostream>
using namespace std;
class phanso
{
private:
    int ts, ms;

public:
    phanso();
    phanso(phanso &p);
    bool operator>(phanso &p);
    friend ostream &operator<<(ostream &mh, phanso &p);
    friend istream &operator>>(istream &bp, phanso &p);
};
phanso::phanso()
{
    ts = 0;
    ms = 1;
}
phanso::phanso(phanso &p)
{
    ts = p.ts;
    ms = p.ms;
}
bool phanso::operator>(phanso &p)
{
    return ts * p.ms > ms * p.ts;
}
ostream &operator<<(ostream &mh, phanso &p)
{
    if(p.ms != 1)
        mh << p.ts << "/" << p.ms;
    else
        mh << p.ts;
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
void sort(T *a, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                T tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
}
template <class T>
void print(T *a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << "   ";
    cout << endl;
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
    sort(a, n);
    cout << "Cac so nguyen sau khi sap xep la: " << endl;
    print(a, n);
    sort(b, n);
    cout << "Cac phan so sau khi sap xep la: " << endl;
    print(b, n);
}
