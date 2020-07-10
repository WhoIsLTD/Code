#include <iostream>
using namespace std;
int main()
{
	int n;
	int dem = 1;
	cout << "nhap vao n: " << endl;
	cin >> n;
	cout << "*" << endl;
	for (int i = 1; i < n / 2; i++)
	{
		cout << "*";
		if (i != n / 2)
		{
			for (int j = 0; j < dem; j++)
				cout << " ";
		}
		else
		{
			for (int j = 0; j < n; j++)
				cout << "*";
		};
		dem += 2;
		cout << "*";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "*"
			 << " ";
	}
	cout << endl;
	int d = n + 1;
	for (int i = d; i < n*2; i++)
	{
		for (int i = 0; i < d; i++)
			cout << " ";
		if(i != n*2-1)
			cout << "*";
		for (int i = d; i <n*2-3 ; i++)
			cout << " ";
		if(i != (n+n*2)/2)
		cout << "*";
		else
			break;
		d+=2;
		cout << endl;
	}
	
}