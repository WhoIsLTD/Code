#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Sinhvien
{
    char hoten[30];
    int ns;
    float diem;
};

struct Node
{
    Sinhvien data;
    Node *pNext;
};

struct List
{
    Node *pHead;
    Node *pTail;
};

//tao ds rong
void Init(List &l)
{
    l.pHead = l.pTail = NULL;
}

//cap bo nho
Node *getNode(Sinhvien x)
{
    Node *p;
    p = new Node;
    if (p == NULL)
    {
        cout << "Khong du bo nho !";
        return NULL;
    }
    strcpy(p->data.hoten, x.hoten);
    p->data.ns = x.ns;
    p->data.diem = x.diem;
    p->pNext = NULL;
    return p;
}

//nhap thong tin sv
void input(Sinhvien &x)
{
    char hoten1[30];
    int ns1;
    float diem1;
    cout << "Nhap ho ten: ";
    cin.ignore(1);
    cin.getline(hoten1, 30);
    strcpy(x.hoten, hoten1);
    cout << "Nhap nam sinh: ";
    cin >> ns1;
    x.ns = ns1;
    do
    {
        cout << "Nhap diem: ";
        cin >> diem1;
    } while (diem1 < 0 || diem1 > 10);
    x.diem = diem1;
}

void xuatsv(Sinhvien sv)
{
    cout << "Ho va ten: " << sv.hoten << ". Nam sinh: " << sv.ns << ". Diem: " << sv.diem << endl;
}

void output(List l)
{
    for (Node *p = l.pHead; p != NULL; p = p->pNext)
    {
        xuatsv(p->data);
    }
}

//them vao dau
void addHead(List &l, Node *New_Node)
{
    if (l.pHead == NULL)
    {
        l.pHead = l.pTail = New_Node;
    }
    else
    {
        New_Node->pNext = l.pHead;
        l.pHead = New_Node;
    }
}

//them vao cuoi
void addTail(List &l, Node *New_Node)
{
    if (l.pHead == NULL)
    {
        l.pHead = l.pTail = New_Node;
    }
    else
    {
        l.pTail->pNext = New_Node;
        l.pTail = New_Node;
    }
}

void hoanvi(Sinhvien &a, Sinhvien &b)
{
    Sinhvien t = a;
    a = b;
    b = t;
}

//sap xep tang dan diem
void sapxep(List l)
{
    Node *p, *q;
    for (p = l.pHead; p != NULL; p = p->pNext)
        for (q = p->pNext; q != NULL; q = q->pNext)
            if (p->data.diem > q->data.diem)
                hoanvi(p->data, q->data);
}
void removeID(List &l)
{
    // xóa sinhvien id = 8
    Node *p = l.pHead;
    Node *q = NULL;
    while (l.pHead->data.ns < 8)
    { // thực hiện xóa phần tử đầu ds là p
        Node *p = l.pHead;
        l.pHead = p->pNext;
        if (l.pHead == NULL)
            l.pTail = NULL;
        delete p;
    }

    if (l.pHead != l.pTail)
    {
        while (p != NULL)
        {
            while (p->pNext != NULL && p->pNext->data.ns < 8)
            {
                q = p->pNext;
                p->pNext = q->pNext;
                delete q;
            }
            p = p->pNext;
        }
    }
}

//tim so lon nhat
void max(List l)
{
    Node *p;
    float max = l.pHead->data.diem;
    for (p = l.pHead; p != NULL; p = p->pNext)
        if (max <= p->data.diem)
            max = p->data.diem;
    for (Node *p = l.pHead; p != NULL; p = p->pNext)
    {
        if (p->data.diem == max)
            xuatsv(p->data);
    }
}

int main()
{
    int n, i;
    Node *p;
    Sinhvien x, *sv;
    List l;
    Init(l);

    //nhap so luong sinh vien
    do
    {
        cout << "Nhap so luong sinh vien: ";
        cin >> n;
    } while (n < 1 || n > 50);

    //nhap thong tin sinh vien
    sv = new Sinhvien[n];
    cout << "\nNhap thong tin tung sinh vien." << endl;
    for (i = 0; i < n; i++)
    {
        cout << "\nSinh vien thu " << i + 1 << endl;
        input(sv[i]);
        p = getNode(sv[i]);
        addTail(l, p);
    }
    //in ra ds vua nhap
    cout << "\nDanh sach sinh vien vua nhap la." << endl;
    output(l);

    //1 sap xep theo diem tang dan
    // cout << "\nDanh sach sinh vien theo diem tang dan la." << endl;
    // sapxep(l);
    // output(l);
    removeID(l);
    //Delete_3000(l);
    //2 them vao dau thong tin 1 sv
    cout << "\nNhap them thong tin 1 sv vao dau danh sach: " << endl;
    // input(x);
    // p = getNode(x);
    // addHead(l, p);
    // cout << endl;
    output(l);

    //3 them vao cuoi thong tin 1 sv
    // cout << "\nNhap them thong tin 1 sv vao cuoi danh sach: " << endl;
    // input(x);
    // p = getNode(x);
    // addTail(l, p);
    // cout << endl;
    // output(l);

    // //4 tim va in ra nhung sinh vien diem cao
    // cout << "\nThong tin nhung sv co diem cao nhat: " << endl;
    // max(l);
}