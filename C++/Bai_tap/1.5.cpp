
#include <iostream>
using namespace std;
struct ps
{
    int ts, ms;
};

//ps operator +(ps a, ps b)
//{
//	ps c;
//	c.ts=a.ts*b.ms+b.ts*a.ms;
//	c.ms=a.ms * b.ms;
//	return c;
//}

void inps(ps a)
{
    cout << a.ts << "/" << a.ms;
}

void Nhapps(ps &a)
{
    cout << "Nhap tu so: ";
    cin >> a.ts;
    do
    {
        cout << "Nhap mau so: ";
        cin >> a.ms;
    } while (a.ms == 0);
}
int main()
{
    ps a, b, c;
    int x, y, z;
    Nhapps(a);
    inps(a);
    cout << "\n";
    Nhapps(b);
    inps(b);
    cout << "\n";
    c = a + b;
    inps(c);
    cout << "\nnhap 2 so nguyen";
    cin >> x >> y;
    cout << "Tong 2 so nguyen z = " << x + y;
}