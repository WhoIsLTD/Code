#include <iostream>
using namespace std;
class phanso
{
private:
    int ts, ms;

public:
    phanso();
    phanso(phanso &p);
    bool operator<(phanso &p);
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
bool phanso::operator<(phanso &p)
{
    return (ts * p.ms < ms * p.ts);
}
ostream &operator<<(ostream &mh, phanso &p)
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
void Swap(T &a, T &b)
{
    T s;
    s = a + b;
}
template <class T>
void sort(T *a, int n)
{
    for (int i = 0; i < n - 1; i++)
        Swap(a[i]);
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
    cout << "Nhap cac phan tu cho mang a: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << (i + 1) << "]=";
        cin >> a[i];
    }
    cout << "Nhap cac phan tu cho mang b: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << "Cac phan tu cua mang a truoc khi sap xep la:" << endl;
    print(a, n);
    sort(a, n);
    cout << "Cac phan tu cua mang a sau khi sap xep la: " << endl;
    print(a, n);
    cout << "Cac phan tu cua mang b truoc khi sap xep la: " << endl;
    print(b, n);
    sort(b, n);
    cout << "Cac phan tu cua mang b sau khi sap xep la: " << endl;
    print(b, n);
}
