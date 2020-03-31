#include <iostream>
using namespace std;
float SUM(int n)
{
    int i;
    float s = 0;
    for (i = 1; i <= n; i++)
        s += 1.0 / i;
    return s;
}
int main()
{
    int n;
    do
    {
        cout << "nhap so duong n=  ";
        cin >> n;
    } while (n <= 0);
    cout << "tong can tinh la: " << SUM(n);
}
