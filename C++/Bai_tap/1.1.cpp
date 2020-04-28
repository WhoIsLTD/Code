#include <iostream>
using namespace std;
int MAX(int a[], int n)
{
    int max = a[0], i;
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    return max;
}
int MIN(int a[], int n)
{
    int min = a[0], i;
    for (i = 0; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    return min;
}
int main()
{
    int n, i, *a = new int[n];
    cout << "Nhap n: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Nhap vao a[" << i + 1 << "]: ";
        cin >> a[i];
    }
    cout << "Max la: " << MAX(a, n);
    cout << "\nMin la: " << MIN(a, n);
}