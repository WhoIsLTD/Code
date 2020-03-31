#include <iostream>
using namespace std;
int SAPXEP(int a[], int n)
{
    int i, j;
    float tg;
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
}
int main()
{
    int i, n, a[50];
    do
    {
        cout << "Nhap so phan tu cua day:  ";
        cin >> n;
    } while (n <= 0 || n > 50);
    for (i = 0; i < n; i++)
    {
        cout << "a[" << i + 1 << "]=  ";
        cin >> a[i];
    }
    SAPXEP(a, n);
    cout << "day da sap xep la : " << endl;

    for (i = 0; i < n; i++)
        printf("\t%f", a[i]);
}
