#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class vecto
{

	float *v;

public:
	int n;
	vecto operator+(vecto);
	float operator*(vecto);
	friend ostream &operator<<(ostream &in, vecto &a);
	friend istream &operator>>(istream &nhap, vecto &a);
};

vecto vecto ::operator+(vecto a)
{
	vecto c;
	c.n = n;
	c.v = new float[c.n];
	for (int i = 0; i <= c.n; i++)
	{
		c.v[i] = a.v[i] + v[i];
	}
	return c;
}

float vecto ::operator*(vecto a)
{
	float Tich = 0;
	if (a.n == n)
	{
		for (int i = 0; i < a.n; i++)
			Tich += a.v[i] * v[i];
	}
	return Tich;
}
istream &operator>>(istream &nhap, vecto &a)
{
	do
	{
		cout << "Nhap so chieu cua vecto: ";
		nhap >> a.n;
	} while (a.n <= 0);
	a.v = new float[a.n];
	for (int i = 0; i < a.n; i++)
	{
		cout << "Gia tri chieu thu " << i + 1 << " la: ";
		nhap >> a.v[i];
	}
	return nhap;
}
ostream &operator<<(ostream &in, vecto &a)
{
	in << "(";
	for (int i = 0; i < a.n - 1; i++)
		in << a.v[i] << ",";
	in << a.v[a.n - 1] << ")";
	return in;
}
int main()
{
	vecto a, b, c;
	cin >> a;
	cout << "Vecto thu 1: " << a << endl
		 << endl;
	cin >> b;
	cout << "Vecto thu 2: " << b << endl
		 << endl;
	if (a.n == b.n)
	{
		c = a + b;
		cout << "Tong 2 vecto a, b la: " << c << endl;
		cout << "Tich vo huong cua 2 vec to a, b la: " << a.operator*(b);
	}
	else
		cout << "Hai ma tran khong cung chieu";
}
