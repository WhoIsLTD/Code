#include <iostream>
using namespace std;
class Sach
{
public:
	char tenSach[30], tacGia[30];
	int soTrang, giaBan;
	void nhap();
	void in();
};
void Sach::nhap()
{
	cin.ignore();
	cout << "Ten Sach: ";
	cin.getline(tenSach, 30);
	cout << "Tac gia: ";
	cin.getline(tacGia, 30);
	cout << "So trang: ";
	cin >> soTrang;
	cout << "Gia ban: ";
	cin >> giaBan;
}
class Bia : public Sach
{
public:
	char ma[20];
	int tien;
	void nhap();
	void in();
};

void Sach::in()
{
	cout << "Ten Sach: " << tenSach << endl;
	cout << "Tac gia: " << tacGia << endl;
	cout << "So trang: " << soTrang << endl;
	cout << "Gia ban: " << giaBan << " dong." << endl;
}
void Bia::nhap()
{
	Sach::nhap();
	cin.ignore();
	cout << "Ma hinh anh: ";
	cin.getline(ma, 12);
	cout << "Tien ve: ";
	cin >> tien;
}
void Bia::in()
{
	Sach::in();
	cout << "Ma hinh anh: " << ma << endl;
	cout << "Tien ve: " << tien << " dong." << endl;
}
int main()
{
	Bia *a;
	Sach *b;
	int m, n, i;
	do
	{
		cout << "Nhap so Sach co anh: ";
		cin >> n;
	} while (n < 0 || n >= 100);

	do
	{
		cout << "Nhap so Sach khong anh: ";
		cin >> m;
	} while (m < 0 || m >= 100);

	a = new Bia[n];
	b = new Sach[m];
	cout << "Nhap thong tin Sach co anh: " << endl;
	for (i = 0; i < n; i++)
	{
		cout << "Cuon Sach thu " << i + 1 << endl;
		a[i].nhap();
	}
	cout << endl;
	cout << "Nhap thong tin Sach khong anh: " << endl;
	for (i = 0; i < m; i++)
	{
		cout << "Cuon Sach thu " << i + 1 << endl;
		b[i].nhap();
	}
	cout << "---------------------------------------" << endl;
	cout << "Danh Sach vua nhap la: " << endl;
	cout << "---------------------------------------" << endl;
	cout << "Sach co anh: " << endl;
	for (i = 0; i < n; i++)
	{

		a[i].in();
	}
	cout << "---------------------------------------" << endl;
	cout << "Sach khong co anh: " << endl;
	for (i = 0; i < m; i++)
	{
		cout << "Cuon Sach thu " << i + 1 + n << ":" << endl;
		b[i].in();
	}
	delete a;
	delete b;
}
