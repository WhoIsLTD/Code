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
    cout << " Nhaptu so:";
    bp >> p.ts;
    cout << " Nhapmauso:";
    bp >> p.ms;
}
template <class T>
void swap(T &a, T &b)
{
    T tg;
    tg = a;
    a = b;
    b = tg;
}
template <class T> void sort(T *a, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j])
                swap(a[i], a[j]);
}
template <class T>
void print(T *a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << "   ";
    cout << endl;
}
