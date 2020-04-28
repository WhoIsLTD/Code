#include <iostream>
#include <cstring>
using namespace std;
struct hanghoa
{
    char ten[20];
    int count;
    float cost, tien;
};

int main()
{
    int n, m, i = 0, j, k;
    hanghoa hh[200], moi;
    cout << "Nhap thong tin hang hoa: " << endl;
    do
    {
        cout << "Ten hang: ";
        fflush(stdin);
        cin.getline(hh[i].ten, 20);
        if (strcmp(hh[i].ten, "*") != 0)
        {
            cout << "So luong: ";
            fflush(stdin);
            cin >> hh[i].count;
            cout << "Don gia: ";
            fflush(stdin);
            cin >> hh[i].cost;
            //Thanh tien = so luong x don gia
            hh[i].tien = hh[i].count * hh[i].cost;
            i++;
        }
    } while (i <= 200 && strcmp(hh[i].ten, "*") != 0);
    n = i;
    //Cac hang hoa co so luong nho nhat
    int min = hh[0].count;
    for (i = 1; i < n; i++)
        if (min > hh[i].count)
            min = hh[i].count; //luu gia tri nho nhat
    //In ra
    cout << "Cac hang hoa co so luong nho nhat la: " << endl;
    for (i = 0; i < n; i++)
        if (hh[i].count == min)
            cout << "[" << i + 1 << "]: Ten hang hoa: " << hh[i].ten << "\tSo luong: " << hh[i].count << endl;
    //Hang hoa moi
    cout << "\nNhap vao mot hang hoa moi: ";
    cout << "\nTen hang: ";
    fflush(stdin);
    cin.getline(moi.ten, 20);
    cout << "So luong: ";
    fflush(stdin);
    cin >> moi.count;
    cout << "Don gia: ";
    fflush(stdin);
    cin >> moi.cost;
    moi.tien = moi.count * moi.cost;

    //Nhap vi tri can chen
    cout << "\nNhap vi tri can chen k = ";
    cin >> m;
    k = m-1;
    if (k < 0)
    {
        k = 0;
    }
    // Neu k >= n => Them vao cuoi
    else if (k > n)
    {
        k = n;
    }
    for (i = n; i > k; i--)
        hh[i] = hh[i - 1];
    hh[k] = moi;

    //In ra danh sach hang hoa moi
    float s = 0;
    cout << "\nDanh sach hang hoa moi la:\n";
    for (i = 0; i <= n; i++)
    {
        cout << "[" << i + 1 << "]: Ten hang hoa: " << hh[i].ten << "\tSo luong: " << hh[i].count << "\tDon gia: " << hh[i].cost << endl;
        s = s + hh[i].tien;
    }
    //Tong gia tri hang hoa trong danh sach
    cout << "\nTong gia tri hang hoa trong danh sach la: " << s;
}
