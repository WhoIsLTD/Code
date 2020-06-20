#include <iostream>
using namespace std;

class NGUOI
{
	protected:
		char hoTen [30];
		int ns;
	public:
		void nhap ();
		void in ();
};
class BENH_NHAN : public NGUOI
{
	protected:
		char benhAn [30];
		int soNgay;
	public:
		void nhap ();
		void in ();
		int tinhTuoi ();
		int tinhVienPhi ();
};
void NGUOI :: nhap ()
{
	cin.ignore();
	cout << " Ho ten: ";
	cin.getline (hoTen, 30);
	cout << " Nam sinh: ";
	cin >> ns;
}
void NGUOI :: in ()
{
	cout << " Ho ten: " << hoTen << ".\n Nam sinh: " << ns << endl;
}

void BENH_NHAN :: nhap ()
{
	NGUOI :: nhap ();
	cin.ignore();
	cout << " Ten benh an: ";
	cin.getline (benhAn, 30);
	cout << " So ngay nam vie: ";
	cin >> soNgay;
}
void BENH_NHAN :: in ()
{
	NGUOI :: in ();
	cout << " Ten benh an: " << benhAn << ".\n So ngay nam vien: " << soNgay << endl;
	cout << " Tuoi hien tai: " << tinhTuoi () << ".\n Vien phi: " << tinhVienPhi () << endl;
}
int BENH_NHAN :: tinhTuoi ()
{
	return 2020 - ns;
}
int BENH_NHAN :: tinhVienPhi ()
{
	return soNgay*150000;
}
int main ()
{
	BENH_NHAN *dsBenhNhan;
	int i, n;
	do {
		cout << "Nhap so benh nhan: ";
		cin >> n;
	} while (n<=0 || n> 100);
	dsBenhNhan = new BENH_NHAN [n];
	for (i = 0; i<n; i++)
	{
		cout << "\n Benh nhan thu " << i+1 << ": " ;
		dsBenhNhan[i].nhap();
	}
    cout << "\n Danh sach benh nhan nho hon bang 10 tuoi: \n";
    int max = dsBenhNhan [0].tinhVienPhi();
    for (i = 0; i<n; i++)
	{
        if (dsBenhNhan[i].tinhTuoi()<=10)
		    dsBenhNhan[i].in();
        if (dsBenhNhan [i].tinhVienPhi()>max)
            max = dsBenhNhan [i].tinhVienPhi();
	}
    cout << " Thong tin cac benh nhan co VP max";
    for (i = 0; i<n; i++)
    {
        if (dsBenhNhan [i].tinhVienPhi() == max)
        	dsBenhNhan[i].in();
    }

}
