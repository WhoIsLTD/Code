#include <iostream>
using namespace std;
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
    for(int i = 1; i < n; i++)
    {
        int x = a[i];
        int pos = i;
        while(pos > 0 && x < a[pos - 1])
        {
            a[pos] = a[pos-1];
            pos--;
        }
        a[pos] = x;
    }
}
int main()
{
    int a[10], n = 10;
    for (int i = 0; i < 10; i++)
    {
        cout << "nhap vao a[" << i << "]: " << endl;
        cin >> a[i];
    }
    InsertSort(a, n);
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
}