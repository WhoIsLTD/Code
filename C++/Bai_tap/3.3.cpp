#include <iostream>
using namespace std;
class vector
{
    int n, *v, i, Tich;

public:
    void INPUT();
    void OUTPUT();
    vector operator+(vector );
    int operator*(vector );
};

void vector ::INPUT()
{
    cout << "nhap vao so chieu cua vecto: ";
    cin >> n;
    v = new int[n];
    for (i = 0; i < n; i++)
    {
        cout << "gia tri chieu thu " << i + 1 << " la: ";
        cin >> v[i];
    }
}
void vector ::OUTPUT()
{
    cout << "v = (" << v[0] << ", ";
    for (i = 1; i < n - 1; i++)
        cout << v[i] << ", ";
    cout << v[n - 1] << ")" << endl;
}
vector vector ::operator+(vector a)
{
    vector c;
    c.n = n;
    c.v = new int[c.n];
    for (int i = 0; i <= c.n; i++)
    {
        c.v[i] = a.v[i] + v[i];
    }
    return c;
}
int vector ::operator*(vector a)
{
    Tich = 0;
    if (a.n == n)
    {
        for (int i = 0; i < a.n; i++)
            Tich += a.v[i] * v[i];
    }
    return Tich;
}
int main()
{
    vector a, b, c;

    a.INPUT();
    cout << "vector a: ";
    a.OUTPUT();
    b.INPUT();
    cout << "vector b: ";
    b.OUTPUT();
    cout << "tong vector a, b: ";
    c = a + b;
    c.OUTPUT();
    cout << "tich vo huong: ";
    int tich = a * b;
    cout << tich;
}
