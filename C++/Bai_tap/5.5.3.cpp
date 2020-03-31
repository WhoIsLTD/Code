#include <iostream>
#include <cstring>
using namespace std;

class BenhNhan
{
public:
	char hoTen[30], queQuan[30];
	int namSinh;
	void nhap();
	void in();
};

void BenhNhan::nhap()
{
	cin.ignore();
	cout << "Ho ten: ";
	cin.getline(hoTen, 30);
	cout << "Que quan (Xa-Huyen-Tinh): ";
	cin.getline(queQuan, 30);
	do
	{
		cout << "Nam sinh: ";
		cin >> namSinh;
	} while (namSinh < 1900 || namSinh > 2020);
}
void BenhNhan::in()
{
	cout << "Ho va ten: " << hoTen << endl;
	cout << "Que quan: " << queQuan << endl;
	cout << "Nam sinh: " << namSinh << endl;
}
class BenhAn : public BenhNhan
{
public:
	char ten[30];
	int tien;
	void nhap();
	void in();
	int tuoi();
};
void BenhAn::nhap()
{
	BenhNhan::nhap();
	cout << "Ten benh an: ";
	cin.ignore(1);
	cin.getline(ten, 30);
	do
	{
		cout << "Vien phi: ";
		cin >> tien;
	} while (tien < 0);
}
void BenhAn::in()
{
	BenhNhan::in();
	cout << "Ten benh an: " << ten << endl;
	cout << "Vien phi: " << tien << endl;
}
int BenhAn::tuoi()
{
	return 2020 - namSinh;
}
int main()
{
	BenhAn *a, tg;
	int n, i, j, max, imax;

	do
	{
		cout << "Nhap so benh an: " << endl;
		cin >> n;
	} while (n < 1);

	a = new BenhAn[n];
	cout << "Nhap thong tin tung benh an" << endl;
	for (i = 0; i < n; i++)
	{
		cout << "------------------" << endl;
		cout << "Benh an thu " << i + 1 << endl;
		a[i].nhap();
	}
	cout << "--------------------------------" << endl;
	cout << "Danh sach benh nhan voi tuoi giam dan." << endl;
	for (i = 0; i < n - 1; i++)
		for (j = 1; j < n; j++)
			if (a[i].tuoi() < a[j].tuoi())
			{
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}

	max = a[0].tien;
	for (i = 0; i < n; i++)
	{
		cout << "Benh nhan thu " << i + 1 << endl;
		a[i].in();
		cout << "Tuoi: " << a[i].tuoi() << endl;
		if (max < a[i].tien)
		{
			max = a[i].tien;
			imax = i;
		}
	}
	cout << "Danh sach benh nhan voi tuoi <=10." << endl;
	for (i = 0; i < n; i++)
		if (a[i].tuoi() <= 10)
		{
			cout << "\tBenh nhan thu " << i + 1 << endl;
			a[i].in();
		}
	cout << "Thong tin benh nhan co vien phi cao nhat:" << endl
		 << endl;
	a[imax].in();
}
