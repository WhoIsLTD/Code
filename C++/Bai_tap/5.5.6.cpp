#include <iostream>
#include <cstring>
using namespace std;
class nhanvien
{
	public:
		char hoTen [20], donVi [20];
		int heSo, luongToiThieu;
		int luong();
		void nhap();
};
class luong : public nhanvien
{
	public:
		int nam, phuCap;
		int kysu();
		int luongchinh();
		void nhap();
		void in();
};
int nhanvien::luong()
{
	return luongToiThieu*heSo;
}
void nhanvien::nhap()
{
	do{
		cin.ignore(1);
		cout << "\tHo ten: ";
		cin.getline(hoTen, 30);
	} while (strcmp(hoTen,"")==0);
	cout << "\tDon vi: ";
	cin.getline(donVi, 12);
	cout << "\tHe so luong: ";
	cin >> heSo;
	cout << "\tLuong toi thieu: ";
	cin >> luongToiThieu;
}
int luong::kysu()
{
	return luongchinh()+nam*phuCap;
}
int luong::luongchinh()
{
	return nhanvien::luong();
}
void luong::nhap()
{
	nhanvien::nhap();
	cout << "\tSo nam trong nghe: ";
	cin >> nam;
	cout << "\tPhu cap chuyen mon: ";
	cin >> phuCap;
}
void luong::in()
{
	cout << "\tHo va ten: " << hoTen << ". Don vi: " << donVi << endl;
	cout << "\tDa trong nghe: " << nam << " nam." << endl;
	cout << "\tLuong: " << kysu() << " dong." << endl;
}
int main()
{
	luong *a;
	int n, i;
	do{
		cout << "Nhap so nhan vien: " ;
		cin >> n;
	} while (n<1 || n>=100);
	a = new luong [n];
	cout << "\nNhap thong tin tung nhan vien." << endl;
	for (i = 0; i < n; i++)
	{
		cout << "\n\tNhan vien thu " << i+1 << endl;
		a[i].nhap();
	}
	cout << "\nLuong moi cua tung nhan vien." << endl;
	for (i = 0; i < n; i++)
	{
		cout << "\n\tNhan vien thu " << i+1 << endl;
		a[i].in();
	}
}
