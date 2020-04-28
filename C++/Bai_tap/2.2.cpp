#include <iostream>
using namespace std;

class ma_tran
{
    int **a;
    int m, n;

public:
    void NHAP();
    void IN();
    void hoanvi(int &a, int &b);
    int SAPXEP();
};

void ma_tran ::NHAP()
{
    int i, j;
    cout << "nhap vao hang: ";
    cin >> n;
    cout << "nhap vao cot: ";
    cin >> m;
    a = new int *[n];
    for (i = 0; i < n; i++)
        a[i] = new int[m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << "Nhap vao a[" << i + 1 << "][" << j + 1 << "]";
            cin >> a[i][j];
        }
    }
}
void ma_tran ::IN()
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
}
void ma_tran ::hoanvi(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int ma_tran ::SAPXEP()
{
    for (int i = 0; i < m * n - 1; i++)
    {
        for (int j = i + 1; j < m * n; j++)
        {
            if (a[i / m][i % m] > a[j / m][j % m])
                hoanvi(a[i / m][i % m], a[j / m][j % m]);
        }
    }
}

int main()
{
    ma_tran x, y;
    x.NHAP();
    x.SAPXEP();
    x.IN();
    y.NHAP();
    y.IN();
}
