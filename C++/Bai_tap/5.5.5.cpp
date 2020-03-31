#include <iostream>
#include <cstring>
using namespace std;
class canbo
{
public:
	char ma[20], donVi[20], baoHiem[20];
	int namSinh, heSoLuong, phuCap;
	void nhap();
	void in();
	int luong();
};
class gvien : public canbo
{
public:
	void nhap();
	void in();
	int docHai, luong();
};
void canbo::nhap()
{
	cin.ignore();
	cout << "Ma can bo: ";
	cin.getline(ma, 12);
	cout << "Ma don vi: ";
	cin.getline(donVi, 12);
	do
	{
		cout << "Nam sinh: ";
		cin >> namSinh;
	} while (namSinh < 1960 || namSinh > 2002);
	cout << "He so luong = ";
	cin >> heSoLuong;
	cout << "Phu cap tang ca = ";
	cin >> phuCap;
}
int canbo::luong()
{
	return 1390 * heSoLuong + phuCap;
}
void canbo::in()
{
	cout << "\tMa can bo: " << ma << ". Ma don vi: " << donVi << endl;
	cout << "\tLuong: " << luong() << " dong." << endl;
}
void gvien::nhap()
{
	canbo::nhap();
	do
	{
		cout << "Phu cap doc hai, (1.co, 2.khong): ";
		cin >> docHai;
	} while (docHai != 1 && docHai != 2);
}
int gvien::luong()
{
	int luong = canbo::luong();
	if (docHai == 1)
		return 1.35 * luong;
	else
		return 1.25 * luong;
}
void gvien::in()
{
	canbo::in();
}
int main()
{
	canbo *a;
	gvien *b;
	int n, m, i;

	do
	{
		cout << "Nhap so can bo: ";
		cin >> n;
	} while (n < 0 || n >= 100);

	do
	{
		cout << "Nhap so giang vien: ";
		cin >> m;
	} while (m < 0 || m >= 100);

	a = new canbo[n];
	cout << "\nNhap thong tin tung can bo." << endl;
	for (i = 0; i < n; i++)
	{
		cout << "\n\tCan bo thu " << i + 1 << endl;
		a[i].nhap();
		cout << a[i].luong() << endl;
	}
	cout << "\nNhap thong tin tung giang vien." << endl;
	b = new gvien[m];
	for (i = 0; i < m; i++)
	{
		cout << "\n\tGiang vien thu " << i + 1 + n << endl;
		b[i].nhap();
		cout << b[i].luong() << endl;
	}
	cout << "\nDanh sach can bo va giang vien phai dong thue thu nhap." << endl;
	for (i = 0; i < n; i++)
		if (a[i].luong() > 5000000)
		{
			cout << "\n\tCan bo thu " << i + 1 << endl;
			a[i].in();
		}
	for (i = 0; i < m; i++)
		if (b[i].luong() > 5000000)
		{
			cout << "\n\tGiang vien thu " << i + 1 << endl;
			b[i].in();
		}
	delete a;
	delete b;
}
