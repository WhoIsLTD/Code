#include <iostream>
using namespace std;
// a,
struct donHang
{
    char tenMatHang[30];
    int gia;
};
struct Node
{
    donHang data;
    Node *pNext;
};
struct List
{
    Node *pHead;
    Node *pTail;
};

// b,
donHang removeNode(List &l)
{
    // xóa đơn hàng giá nhỏ hơn 3000
    Node *p = l.pHead;
    Node *q = NULL;
    while (p != NULL)
    {
        if (p->data.gia < 3000)
            break;
        q = p;
        p = p->pNext;
    }
    if (p == NULL)
    {
        cout << "Không tìm thấy k";
    }
    else if (q == NULL)
    { // thực hiện xóa phần tử đầu ds là p
        Node *p = l.pHead;
        l.pHead = p->pNext;
        if (l.pHead == NULL)
            l.pTail = NULL;
        delete p;
    }
    else
    {
        // thực hiện xóa phần tử p sau q
        Node *p = q->pNext;
        q->pNext = p->pNext;
        if (p == l.pTail)
            l.pTail = q;
        delete p;
    }
}
// c
void RemoveList(List &l)
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
