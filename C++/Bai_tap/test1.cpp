#include <iostream>
#include <cmath>
using namespace std;
int tinhHam(int n)
{
    if (n < 1)
        return 0;
    return n * pow(2, n) + tinhHam(n-1);
}
int main(){
    cout << tinhHam(4);
}
