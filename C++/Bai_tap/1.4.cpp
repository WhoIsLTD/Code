#include <iostream>
#include <math.h>
using namespace std;
float dt(float a, float b, float c)
{
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main()
{
	float a, b, c;
	do
	{
		cout << "Nhap lan luot do dai 3 canh: ";
		cin >> a >> b >> c;
	} while (a <= 0 || b <= 0 || c <= 0);
	if (a + b > c && a + c > b && b + c > a)
		cout << "Dien tich tam giac = " << dt(a, b, c);
	else
		cout << "Khong phai tam giac";
}
