#include <iostream>
#include <math.h>
using namespace std;

struct Node // khai bao cau truc cua mot Node
{
    int data;
    Node *pNext;
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
// them mot phan tu vao vi tri k
void addAt(List &l, int pos, Node *New_Node)
{
    if (pos == 0 || l.pHead == NULL)
    {
        addHead(l, New_Node);
    }
    else
    {
        int k = 1;
        Node *p = l.pHead;
        while (p != NULL && k != pos)
        {
            p = p->pNext;
            ++k;
        }

        if (k != pos)
        {

            addTail(l, New_Node);
        }
        else
        {
            New_Node->pNext = p->pNext;
            p->pNext = New_Node;
        }
    }
}
// tim so nguyen to trong danh sach
int Snt(List l)
{
    Node *p;
    int i, k = 0;
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
            return p->data;
        p = p->pNext;
    }
}
// tim vi tri cua phan tu trong danh sach
int Search(List l, int x)
{
    int pos = 1;
    Node *p = l.pHead;
    while (p != NULL)
    {
        if (p->data == x)
            return pos;
        p = p->pNext;
        pos++;
    }
    return NULL;
}
// xoa phan tu le khoi danh sach
void Even(List &l)
{
    Node *e;
    Node *p = l.pHead;

    while (p != NULL && p->data % 2 == 0)
    {
        p = p->pNext;
    }
    l.pHead = p;
    if (p == NULL)
        return;
    e = p;
    p = p->pNext;
    while (p != NULL)
    {
        if (e)
            if (p->data % 2 != 0)
            {
                e->pNext = p;
                e = p;
            }
        p = p->pNext;
    }
}
// in ra man hinh
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
void addAfter(List &l, Node *q, Node *new_node)
{
    if (l.pHead == NULL && q == NULL)
        l.pHead = l.pTail = new_node;
    if (q != NULL)
    {
        new_node->pNext = q->pNext;
        q->pNext = new_node;
        if (q == l.pTail)
            l.pTail = new_node;
    }
}

void addBefore(List &l, Node *q, Node *new_node)
{
    Node *e = NULL;
    Node *p = l.pHead;
    while (p->data != q->data && p != NULL)
    {
        e = p;
        p = p->pNext;
    }
    new_node->pNext = e->pNext;
    e->pNext = new_node;
}
//main
int main()
{
    Node *p;
    List l;
    Init(l);
    //1. Nhập danh sách liên kết đơn gồm 10 số nguyên ngẫu nhiên
    for (int i = 0; i < 10; i++)
    {
        int v = rand() % 10;
        p = getNode(v);
        addHead(l, p);
    }
    output(l);
    //1a. Thêm vào đầu danh sách một node có giá trị bằng 8
    cout << "Them 8 vao dau danh sach: " << endl;
    p = getNode(8);
    addHead(l, p);
    output(l);
    //1b. Thêm vào cuối danh sách lần lượt là các giá trị 19, 21, 33
    cout << "Them 19, 21, 33 vao cuoi danh sach: " << endl;
    p = getNode(19);
    addTail(l, p);
    p = getNode(21);
    addTail(l, p);
    p = getNode(33);
    addTail(l, p);
    output(l);
    //1c. Thêm giá trị 100 vào vị trí thứ 5 trong danh sách.
    cout << "Them 100 vao vi tri thu 5: " << endl;
    p = getNode(100);
    addAt(l, 4, p);
    output(l);
    //1d. Tìm giá trị đầu tiên là số nguyên tố trong danh sách, cho biết nó ở vị trí thứ mấy trong danh sách.
    cout << "So nguyen to dau tien la: " << endl
         << Snt(l) << endl
         << "Tai vi tri thu: " << endl
         << Search(l, Snt(l)) << endl;
    //1e. Xóa các phần tử chẵn trong danh sách.
    Node *g, *h;
    g = getNode(7);
    h = getNode(2);
    addBefore(l, g, h);
    output(l);
    cout << "Xoa so chan trong danh sach: " << endl;
    Even(l);
    output(l);
}
