#include <iostream>
using namespace std;
class PhanSo
{
    int ts, ms;

public:
    friend istream &operator>>(istream &in, PhanSo &p);
    friend ostream &operator<<(ostream &out, PhanSo p);
    void kTra();
    bool operator>(PhanSo b);
};
istream &operator>>(istream &in, PhanSo &p)
{
    cout << "nhap vao tu so" << endl;
    in >> p.ts;
    do
    {
        cout << "nhap vao mau so: " << endl;
        cin >> p.ms;
    } while (p.ms == 0);
}
ostream &operator<<(ostream &out, PhanSo p)
{
    cout << p.ts << "/" << p.ms;
}
void PhanSo::kTra()
{
    if (ts != 0)
        cout << "phan so khac 0" << endl;
    else

        cout << "phan so bang 0" << endl;
}
bool PhanSo ::operator>(PhanSo b)
{
    return (ts / ms) > (b.ts / b.ms);
}
template <class T>
T hoanVi(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                T temp = a[i];
                a[i] = a[j];
                a[j] = temp;9
            }
        }
    }
}
template <class T>
T print(T a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main()
{
    PhanSo ps[10];
    int x[10], n;
    char y[10];
    cout << "nhap vao so luong phan tu cua moi loai: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "nhap vao so x[" << i << "]: ";
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "nhap vao ki tu y[" << i << "]: ";
        cin >> y[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> ps[i];
    }

    hoanVi(ps, n);
    hoanVi(x, n);
    hoanVi(y, n);
    cout << "day ps so khi sap xep tang dan: " << endl;

    print(ps, n);
    cout << "day so nguyen khi sap xep tang dan: " << endl;

    print(x, n);
    cout << "day ki tu khi sap xep tang dan: " << endl;

    print(y, n);
}
