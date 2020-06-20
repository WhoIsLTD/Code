#include <iostream>
#include <cstdlib>
using namespace std;
void menu()
{
	cout << "\n1. Sap xep va mo ta mang theo thuat toan doi cho truc tiep" << endl
		 << "2. Sap xep va mo ta mang theo thuat toan noi bot" << endl
		 << "3. Sap xep va mo ta thuat toan chen" << endl
		 << "4. Sap xep va mo ta thuat toan chon lua" << endl
		 << "5. Sap xep va mo ta thuat toan theo thuat toan sap xep nhanh" << endl
		 << "6. Thoat!";
}
void Show(int a[], int n)
{
	for (int dem = 0; dem < n; dem++)
	{
		cout << a[dem] << "\t";
	}
	cout << endl;
}
void InterchangeSort(int a[], int n)
{
	Show(a, n);
	for (int i = 0; i < n - 1; i++)
	{
		cout << "i = " << i << endl;
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j]) //nếu có nghịch thế thì đổi chỗ
			{
				swap(a[i], a[j]);
				Show(a, n);
			}
	}
}
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void BubbleSort(int a[], int n)
{
	Show(a, n);
	for (int i = 0; i < n - 1; i++)
	{
		cout << "i = " << i << endl;
		for (int j = n - 1; j > i; j--)
			if (a[j] < a[j - 1])
			{
				swap(a[j], a[j - 1]);
				Show(a, n);
			}
	}
}
void InsertionSort(int a[], int n)
{
	Show(a, n);
	int pos, x;
	for (int i = 1; i < n; i++) //đoạn a[0] đã sắp
	{
		cout << "i = " << i << endl;
		x = a[i];
		pos = i;
		while (pos > 0 && x < a[pos - 1])
		{
			a[pos] = a[pos - 1]; // dời chỗ
			pos--;
		}
		a[pos] = x;
		Show(a, n);
	}
}
void SelectionSort(int a[], int n)
{
	Show(a, n);
	int min; // chỉ số phần tử nhỏ nhất trong dãy hiện hành
	for (int i = 0; i < n - 1; i++)
	{
		cout << "i = " << i << endl;
		min = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[min])
				min = j; // ghi nhận vị trí phần tử nhỏ nhất
		if (min != i)
		{
			swap(a[min], a[i]);
			Show(a, n);
		}
	}
}
void QuickSort(int a[], int left, int right)
{
	int i, j, x;
	if (left >= right)
		return;
	x = a[(left + right) / 2]; // chọn phần tử giữa làm giá trị mốc
	i = left;
	j = right;
	do
	{
		while (a[i] < x)
			i++;
		while (a[j] > x)
			j--;
		if (i <= j)
		{
			swap(a[i], a[j]);
			i++;
			j--;
		}
	} while (i < j);
	if (left < j)
		QuickSort(a, left, j);
	if (i < right)
		QuickSort(a, i, right);
}
void copy(int a[], int b[], int n)
{
	for (int i = 0; i < n; i++)
		b[i] = a[i];
}
int main()
{
	int n;
	do
	{
		cout << "nhap vao so phan tu cua mang: " << endl;
		cin >> n;
	} while (n < 0);
	int a[n], b[n];
	for (int i = 0; i < n; i++)
	{
		cout << "nhap vao a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "ma tran vua nhap la: " << endl;
	Show(a, n);
	menu();
	int choice;
	while (true)
	{

		cout << "\nNhap lua chon: " << endl;
		cin >> choice;
		copy(a, b, n);
		switch (choice)
		{
		case 1:
			cout << "Thuat toan doi cho truc tiep: " << endl;
			InterchangeSort(b, n);
			break;
		case 2:
			cout << "Thuat toan noi bot: " << endl;
			BubbleSort(b, n);
			break;
		case 3:
			cout << "Thuat toan chen: " << endl;
			InsertionSort(b, n);
			break;
		case 4:
			cout << "Thuat toan lua chon: " << endl;
			SelectionSort(b, n);
			break;
		case 5:
			cout << "Thuat toan QuickSort: " << endl;
			Show(a, n);
			QuickSort(b, 0, n);
			Show(b, n);
			break;
		default:
			cout << "Thoat!";
			exit(1);
			break;
		}
	}
}
