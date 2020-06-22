#include <iostream>
using namespace std;
void Show(int a[], int n)
{
    for (int dem = 0; dem < n; dem++)
    {
        cout << a[dem] << "\t";
    }
    cout << endl;
}
void SelectionSort(int a[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min] < a[j])
                min = j;
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
void BubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            if (a[j] > a[j - 1])
            {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}
void InsertSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        cout << "i = " << i << endl;
        int x = a[i];
        int pos = i;
        for (int j = pos - 1; j >= 0; j--)
        {
            if (a[j] > a[pos])
                swap(a[j], a[pos]);
            pos--;
        }
        Show(a, n);
    }
}
void QuickSort(int a[], int left, int right)
{
    int i = left, j = right;
    int x = a[(left + right) / 2];
    do
    {
        while (a[i] > x)
            i++;
        while (a[j] < x)
        {
            j--;
        }
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    } while (i < j);

    if (left < j)
        QuickSort(a, left, j);
    if (j < right)
        QuickSort(a, j, right);
}
int main()
{
    int a[10], n = 10;
    for (int i = 0; i < 10; i++)
    {
        cout << "nhap vao a[" << i << "]: " << endl;
        cin >> a[i];
    }
    InsertSort(a, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
}