#include <iostream>
using namespace std;
int main()
{
    int a = 2, b = 7;
    b = a, a = b;
    cout << a << ", " << b;
}
