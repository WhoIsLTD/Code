#include <iostream>
using namespace std;

class matran
{
    int **v;
    int n, m;

public:
    matran operator+(matran);
    matran operator-(matran);
    matran operator*(matran);
    friend ostream &operator<<(ostream &out, matran &a);
    friend istream &operator>>(istream &in, matran &a);
};

istream &operator>>(istream &in, matran &a)
{
    int i, j;
    cout << "nhap vao hang: ";
    cin >> a.n;
    cout << "nhap vao cot: ";
    cin >> a.m;
    a.v = new int *[a.n];
    for (i = 0; i < a.n; i++)
        a.v[i] = new int[a.m];
    for (i = 0; i < a.n; i++)
    {
        for (j = 0; j < a.m; j++)
        {
            cout << "Nhap vao a[" << i + 1 << "][" << j + 1 << "]";
            cin >> a.v[i][j];
        }
    }
}

ostream &operator<<(ostream &out, matran &a)
{
    int i, j;
    for (i = 0; i < a.n; i++)
    {
        for (j = 0; j < a.m; j++)
            cout << a.v[i][j] << "\t";
        cout << endl;
    }
}
matran matran ::operator+(matran b)
{
    matran c;
    int i, j;
    c.n = n;
    c.m = m;
    c.v = new int *[c.n];
    for (i = 0; i < c.n; i++)
        c.v[i] = new int[c.m];
    for (i = 0; i < c.n; i++)
        for (j = 0; j < c.m; j++)
            c.v[i][j] = v[i][j] + b.v[i][j];
    return c;
}
matran matran ::operator-(matran b)
{
    matran c;
    int i, j;
    c.n = b.n;
    c.m = b.m;
    c.v = new int *[c.n];
    for (i = 0; i < c.n; i++)
        c.v[i] = new int[c.m];
    for (i = 0; i < c.n; i++)
        for (j = 0; j < c.m; j++)
            c.v[i][j] = v[i][j] - b.v[i][j];
    return c;
}
matran matran ::operator*(matran b)
{
    matran c;
    int i, j;
    c.n = b.n;
    c.m = b.m;
    c.v = new int *[c.n];
    for (i = 0; i < c.n; i++)
        c.v[i] = new int[c.m];
    for (i = 0; i < c.n; i++)
        for (j = 0; j < c.m; j++)
        {
            c.v[i][j] = 0;
            for (int k = 0; k < b.n; k++)
            {
                c.v[i][j] += v[i][k] * b.v[k][j];
            }
        }
    return c;
}
int main()
{

    matran a, b, c;
    cin >> a;
    cout << "ma tran a la: " << endl;
    cout << a;
    cin >> b;
    cout << "ma tran b la: " << endl;
    cout << b;
    cout << "tong 2 ma tran a, b la: " << endl;
    c = a + b;
    cout << c;
    cout << "hieu 2 ma tran a, b la: " << endl;
    c = a - b;
    cout << c;
    cout << "tich 2 ma tran a, b la: " << endl;
    c = a * b;
    cout << c;
}
