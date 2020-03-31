#include <iostream>
#include <math.h>
using namespace std;

class phanso
{
private:
    int ts, ms;

public:
    phanso Nhap();
    phanso In();
    void Toi_Gian();
    int operator<(phanso a);
};
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
        cout << ts / ms << endl;
    else
        cout << ts << "/" << ms << endl;
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
int phanso ::operator<(phanso a)
{
    int x, y;
    x = a.ts /a.ms;
    y = ts / ms;
    return x < y;
}

int main()
{
    int n, i, j;
    phanso a[10], tg;
    //nhap mang co n phan so
    do
    {
        cout << "Nhap so phan tu cua mang: ";
        cin >> n;
    } while (n <= 0 || n > 10);

    //nhap gia tri phan tu
    for (i = 0; i < n; i++)
    {
        cout << "\nNhap vao phan so thu " << i + 1 << endl;
        a[i].Nhap();
    }

    //in ra mang n phan so vua nhap
    cout << "\nMang " << n << " phan so vua nhap la:" << endl;
    for (i = 0; i < n; i++)
    {
        a[i].Toi_Gian();
        cout << "Phan so [" << i + 1 << "] = ";
        a[i].In();
    }

    //Sap xep giam dan
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    //In mang sau sap xep
    cout << "\nMang " << n << " phan so theo thu tu giam dan la:" << endl;
    for (i = 0; i < n; i++)
    {
        a[i].Toi_Gian();
        cout << "Phan so [" << i + 1 << "] = ";
        a[i].In();
    }
}
