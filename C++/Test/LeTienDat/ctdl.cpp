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
void Init(List &l)
{
    l.pHead = l.pTail = NULL;
}
Node *getNode(Sinhvien x)
{
    Node *p;
    p = new Node;
    p->data = x;
    p->pNext = NULL;
    return p;
}
void input(Sinhvien &x)
{
    char hoten1[30];
    int ns1;
    float diem1;

    cout << "Nhap ho ten:  " << endl;
    cin.ignore();
    cin.getline(x.hoten, 30);
    cout << "Nhap thong tin nam sinh: " << endl;
    cin >> x.ns;
    cout << "Nhap thong tin diem: " << endl;
    cin >> x.diem;
}
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
void addTail(List &l, Node*New_Node)
{
    
    if(l.pHead == NULL)
        l.pHead = l.pTail = New_Node;
    else
        {
            New_Node->pNext=l.pTail->pNext;
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
void SapXep(List l)
{
    for (Node *p = l.pHead; p != NULL; p = p->pNext)
    {
        for (Node *q = p->pNext; q != NULL; q = q->pNext)
        {
            if (p->data.diem > q->data.diem)
            {
                hoanvi(p->data, q->data);
            }
        }
    }
}
int Diem(List l)
{
    int max;
    Node *p = l.pHead;
    max = 0;
    while (p != NULL)
    {
        if (max < p->data.diem)
        {
            max = p->data.diem;
        }
        p = p->pNext;
    }
    return max;
}
void xuatsv(Sinhvien x)
{
    cout << " Ho va ten: " << x.hoten << endl;
    cout << " Nam sinh:" << x.ns << endl;
    cout << " Diem: " << x.diem << endl;
}
void output(List l)
{
    Node *p;
    while (p != NULL)
    {
        cout << endl
             << p->data.hoten << "\t" << p->data.ns << "\t" << p->data.diem << endl;
        p = p->pNext;
    }
}

int main()
{
    int n, max;
    Node *p;
    Sinhvien x;
    List l;
    Init(l);
    cout << "nhap vao so luong sinh vien:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        input(x);
        p = getNode(x);
        addHead(l, p);
    }
    cout << "-------------------------------";
    cout << "danh sach sinh vien vua sap xep tang dan la:";
    SapXep(l);
    output(l);
    cout << "-------------------------------";
    cout<<"Them 1 sv vao dau danh sach:" << endl;
    input(x);
    p = getNode(x);
    addHead(l, p);
    output(l);
    // cout<<"Them 1 sv vao cuoi danh sach:" << endl;
    // input(x);
    // p = getNode(x);
    // addTail(l, p);

    cout <<"Nhung sv co diem cao nhat la:";
    max = Diem(l);
    for (p = l.pHead; p != NULL; p = p->pNext)
        if (p->data.diem == max)
        {
            xuatsv(p->data);
        }
}