#include <iostream>
using namespace std;

class ma_tran
{
    int **a;
    int n;

public:
    void NHAP();
    void IN();

    int MT_DON_VI();
};

void ma_tran ::NHAP()
{
    int i, j;
    cout << "nhap vao hang, cot: ";
    cin >> n;
    a = new int *[n];
    for (i = 0; i < n; i++)
        a[i] = new int[n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
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
        for (j = 0; j < n; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
}

int ma_tran ::MT_DON_VI()
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i][i] == 1)
            {
                if (a[i][j] == 0)
                    return 0;
                else
                {
                    return 1;
                    break;
                }
            }
            else
            {
                return 1;
                break;
            }
        }
    }
}
int main()
{

    ma_tran x, y;
    x.NHAP();
    x.IN();
    int ss = x.MT_DON_VI();
    switch (ss)
    {
    case 0:
        cout << "la ma tran don vi";
        break;
    case 1:
        cout << "0 la ma tran don vi";
        break;
    default:
        break;
    }
}
