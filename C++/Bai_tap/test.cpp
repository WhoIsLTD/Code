#include <iostream>
using namespace std;

class matran
{
private:
	int n;

public:
	int **v;
	void nhap();
	void in();
	matran operator=(matran b);
	matran operator+(matran b);
};
void matran ::nhap()
{
	cout << "Nhap so hang, cot: ";
	cin >> n;
	v = new int *[n];
	for (int i = 0; i < n; i++)
	{
		v[i] = new int[n];
	}
	cout << "Nhap vao cac phan tu: " << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap vao phan tu v[" << i + 1 << "][" << j + 1 << "]";
			cin >> v[i][j];
		}
}
void matran::in()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << v[i][j] << "\t";
		}
		cout << endl;
	}
}
matran matran ::operator=(matran b)
{
	matran c;
	c.v = new int *[n];
	for (int i = 0; i < n; i++)
	{
		c.v[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c.v[i][j] = b.v[i][j];
		}
	}
	return c;
}
matran matran ::operator+(matran b)
{
	matran c;
	c.n = b.n;
	c.v = new int *[c.n];
	for (int i = 0; i < c.n; i++)
	{
		c.v[i] = new int[c.n];
	}
	for (int i = 0; i < c.n; i++)
		for (int j = 0; j < c.n; j++)
		{
			c.v[i][j] = v[i][j] + b.v[i][j];
		}
	return c;
}
int main()
{
	matran a, b, c;
	a.nhap();
	a.in();
	b.nhap();
	b.in();
	c = a + b;
	c.in();
}
