#include <iostream>
#include <math.h>
using namespace std;

struct Node // khai bao cau truc cua mot Node
{
    int data;
    Node *pNext;
};
//luu gia tri max, min
struct GT
{
    int maxx = 0, minn = 0;
};
//luu gia tri so nguyen to cuoi, dem
struct SoNT
{
    int soCuoi = 0, dem = 0;
};
//luu gia tri tong am, duong; tich, binh phuong
struct Sum
{
    int am = 0, duong = 0, tich = 1, binhPhuong = 0;
};
struct List
{
    Node *pHead; //con tro chua dia chi cua Node dau tien
    Node *pTail; // Con tro chua dia chi cua Node sau cung.
};

Node *getNode(int n)
{
    Node *p;
    p = new Node; //Xin cap phat bo nho cho Node
    if (p == NULL)
    {
        cout << "Khong du bo nho de cap pha";
        return NULL;
    }
    p->data = n;
    p->pNext = NULL;
    return p;
}

void Init(List &l)
{
    l.pHead = l.pTail = NULL;
}
//them mot phan tu vao dau danh sach
void addHead(List &l, Node *New_Node)
{
    if (l.pHead == NULL)
        l.pHead = l.pTail = New_Node;
    else
    {
        New_Node->pNext = l.pHead;
        l.pHead = New_Node;
    }
}
// them mot phan tu vao cuoi danh sach
void addTail(List &l, Node *New_Node)
{

    if (l.pHead == NULL)
        l.pHead = l.pTail = New_Node;
    else
    {
        l.pTail->pNext = New_Node;
        l.pTail = New_Node;
    }
}
// them mot Node vao truoc Node q;


void addBefore(List &l, Node *q, Node *new_node)
{
    Node *e;
    Node *p = l.pHead;
    int dem = 0;
    if (q->data == p->data)
        addHead(l, new_node);
    else
    {
        while (p != NULL)
        {
            if (p->data == new_node->data)
            {
                dem += 1;
                break;
            }
            p = p->pNext;
        }
        if (dem == 0)
            cout << "khong tim thay Node q" << endl;
        p = l.pHead;
        while (p->data != q->data || p != NULL)
        {
            e = p;
            p = p->pNext;
        }

        new_node->pNext = e->pNext;
        e->pNext = new_node;
    }
}
// dao nguoc list
int nghichDao(List &l)
{
    Node *p = l.pHead;
    Node *e;
    l.pHead = NULL;
    while (p != NULL)
    {
        e = p->pNext;
        p = getNode(p->data);
        addHead(l, p);
        p = e;
    }
}
//tinh tong gia tri am, duong, tich, binh phuong cac so trong danh sach
Sum tong(List l)
{
    Node *p = l.pHead;
    Sum a;
    while (p != NULL)
    {
        if (p->data > 0)
            a.duong += p->data;
        if (p->data < 0)
            a.am += p->data;
        a.tich *= p->data;
        a.binhPhuong += pow(p->data, 2);
        p = p->pNext;
    }
    return a;
}
//tim max, min
GT maxMin(List l)
{
    GT a;
    Node *p = l.pHead;
    Node *e = l.pHead;
    a.maxx = a.minn = e->data;
    while (p != NULL)
    {
        if (a.maxx < p->data)
            a.maxx = p->data;
        if (a.minn > p->data)
            a.minn = p->data;
        p = p->pNext;
    }
    return a;
}
// cac so la boi
int boi(List &l, int a)
{
    Node *p = l.pHead;
    while (p != NULL)
    {
        if (p->data % a == 0)
        {
            cout << "\t" << p->data;
        }
        p = p->pNext;
    }
}
// cac so la uoc
int uoc(List &l, int a)
{

    Node *p = l.pHead;
    while (p != NULL)
    {
        if (a % p->data == 0)
            cout << "\t" << p->data;
        p = p->pNext;
    }
}
//tim phan tu lon hon x
int bigger(List l, int a)
{
    Node *p = l.pHead;
    while (p != NULL)
    {
        if (p->data > a)
        {
            a = p->data;
            return a;
        }
        p = p->pNext;
    }
}
// tim so nguyen to trong danh sach
SoNT snt(List l)
{
    Node *p;
    int i, k = 0;
    SoNT a;
    p = l.pHead;
    while (p != NULL)
    {
        k = 0;
        if (p->data < 2)
        {
            p = p->pNext;
            continue;
        }
        else
        {
            for (i = 1; i <= p->data; i++)
            {
                if (p->data % i == 0)
                    k++;
            }
        }
        if (k == 2)
        {
            a.soCuoi = p->data;
            a.dem++;
        }
        p = p->pNext;
    }
    return a;
}
//kiem tra danh sach co sap xep tang dan hay khong
int tangDan(List l)
{
    Node *p = l.pHead;
    while (p->pNext != NULL)
    {
        if (p->data > p->pNext->data)
            return 1;
        p = p->pNext;
    }
    return 0;
}
// kiem tra danh sach doi xung
int doiXung(List l)
{
    int *a, n = 0, i = 0;
    Node *p = l.pHead;

    while (p != NULL)
    {
        n++;
        p = p->pNext;
    }
    p = l.pHead;
    a = new int[n];
    while (p != NULL)
    {
        a[i] = p->data;
        i++;
        p = p->pNext;
    }
    if (n % 2 != 0)
    {
        for (i = 0; i <= n / 2; i++)
        {
            if (a[(n / 2) - i] != a[(n / 2) + i])
                return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}
//xoa dau danh sach
int removeHead(List &l)
{
    if (l.pHead == NULL)
        return 0;
    Node *p = l.pHead;
    l.pHead = p->pNext;
    if (l.pHead == NULL)
        l.pTail = NULL; //Nếu danh sách rỗng
    delete p;
    return 1;
}
//xoa cuoi danh sach
int removeTail(List &l)
{
    Node *p = l.pHead;
    Node *e;
    while (p != NULL)
    {
        p = p->pNext;
        if (p == l.pTail)
        {
            e->pNext = NULL;
            delete p;
        }
        e = p;
    }
}
//Huy toan bo danh sach
void removeList(List &l)
{
    Node *p;
    while (l.pHead != NULL)
    {
        p = l.pHead;
        l.pHead = p->pNext;
        delete p;
    }
    l.pTail = NULL;
}
// output
void output(List l)
{
    Node *p = l.pHead;
    while (p != NULL)
    {
        cout << p->data << "\t";
        p = p->pNext;
    }
    cout << endl;
}
// menu
void menu()
{
    cout << "=================MENU================" << endl
         << "1. them mot pt vao cuoi list" << endl
         << "2. Them mot phan tu vao truoc mot phan tu nao do" << endl
         << "3. In ds" << endl
         << "4. In ds theo thu tu nguoc" << endl
         << "5. Tim GTLN, GTNN trong ds" << endl
         << "6. Tinh tong so Duong, so Am trong danh sach" << endl
         << "7. Tinh tich cac so trong danh sach " << endl
         << "8. Tinh tong binh phuong cac so trong danh sach" << endl
         << "9. Nhap x, xuat cac so la boi cua x" << endl
         << "10. Nhap x, xuat cac so la uoc cua x" << endl
         << "11. Nhap x, tim gia tri dau tien trong danh sach lon hon x" << endl
         << "12. Xuat so nguyen to cuoi cung trong ds" << endl
         << "13. Dem cac so nguyen to" << endl
         << "14. Kiem tra ds co duoc sap xep tang dan khong?" << endl
         << "15. Kiem tra ds co cac pt doi xung nhau khong?" << endl
         << "16. Xoa pt cuoi cung" << endl
         << "17. Xoa pt dau" << endl
         << "18. Huy toan bo danh sach" << endl
         << "19. Thoat!!!" << endl
         << "=====================================" << endl;
}
// chon Menu
int choose()
{
    int n = 0;
    do
    {
        cout << "Moi chon menu: " << endl;
        cin >> n;
    } while (n < 0 || n > 19);
}
//main
int main()
{
    Node *p;
    List l;
    Init(l);
    int n, m, *v;
    //nhap danh sach
    cout << "Nhap vao so luong phan tu trong danh sach: " << endl;
    cin >> n;
    v = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap vao phan tu thu " << i + 1 << ": ";
        cin >> m;
        p = getNode(m);
        addTail(l, p);
    }
    menu();
    // case
    while (true)
    {
        int chon = choose();
        switch (chon)
        {
        case 1:
        {
            cout << "Nhap vao pt muon them vao cuoi ds: ";
            cin >> m;
            p = getNode(m);
            addTail(l, p);
            output(l);
            break;
        }
        case 2:
        {
            Node *g, *h;
            cout << "Nhap vao pt muon them: ";
            cin >> m;
            h = getNode(m);
            cout << "Nhap vao pt bi them: ";
            cin >> n;
            g = getNode(n);
            addBefore(l, g, h);
            output(l);
            break;
        }
        case 3:
        {
            cout << "In DS: " << endl;
            output(l);
            break;
        }
        case 4:
        {
            cout << "Ds dao nguoc: " << endl;
            nghichDao(l);
            output(l);
            break;
        }
        case 5:
        {
            GT a = maxMin(l);
            cout << "gia tri lon nhat la: " << a.maxx << endl
                 << "gia tri nho nhat la: " << a.minn << endl;
            break;
        }
        case 6:
        {
            Sum b = tong(l);
            cout << "tong gia tri am la: " << b.am << endl
                 << "tong gia tri duong la: " << b.duong << endl;
            break;
        }
        case 7:
        {
            Sum b = tong(l);
            cout << "tich cac so trong danh sach la: " << b.tich << endl;
            break;
        }
        case 8:
        {
            Sum b = tong(l);
            cout << "tong binh phuong cac so trong danh sach la: " << b.binhPhuong << endl;
            break;
        }
        case 9:
        {
            cout << "nhap vao x: ";
            cin >> m;
            cout << "cac boi cua " << m << " la: " << endl;
            boi(l, m);
            break;
        }
        case 10:
        {
            cout << "nhap vao x: ";
            cin >> m;
            cout << "cac uoc cua " << m << " la: " << endl;
            uoc(l, m);
            break;
        }
        case 11:
        {
            cout << "nhap vao x: ";
            cin >> m;
            cout << "gia tri dau tien lon hon " << m << " trong danh sach la: " << bigger(l, m) << endl;
            break;
        }
        case 12:
        {
            SoNT c = snt(l);
            cout << "So nguyen to cuoi cung la: " << c.soCuoi << endl;
            break;
        }
        case 13:
        {
            SoNT c = snt(l);
            cout << "So luong cac so nguyen to trong ds la: " << c.dem << endl;
            break;
        }
        case 14:
        {
            int d = tangDan(l);
            if (d == 0)
                cout << "danh sach tang dan" << endl;
            else
                cout << "danh sach khong tang dan" << endl;
            break;
        }
        case 15:
        {
            int e = doiXung(l);
            if (e == 1)
                cout << "danh sach khong doi xung" << endl;
            else
                cout << "danh sach doi xung" << endl;
            break;
        }
        case 16:
        {
            cout << "Xoa phan tu cuoi danh sach" << endl;
            removeTail(l);
            output(l);
            break;
        }
        case 17:
        {
            cout << "xoa phan tu dau danh sach" << endl;
            removeHead(l);
            output(l);
            break;
        }
        case 18:
        {
            cout << "Xoa toan bo danh sach" << endl;
            removeList(l);
            output(l);
            break;
        }
        case 19:
        {
            cout << "Thoat!!!\n";
            exit(1);
            break;
        }
        }
    }
}
