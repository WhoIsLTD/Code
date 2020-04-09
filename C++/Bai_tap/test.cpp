#include<iostream>
using namespace std;

struct Node
{
    DataType data;
    Node *pNext;
};
struct Stack
{
    Node *top;
};
void Init(Stack &t)
{
    t.top = NULL;
}
int isEmpty (Stack t)
{
    return t.top == NULL
}
void Push (Stack &t, DataType x)
{
    Node *p = new Node;
    if (p == NULL )
    {
        cout <<"khong du bo nho";
        return;
    }
    p->data;
    p->pNext = NULL;
    if(t.top == NULL)
        t.top = p;
    else
    {
        p->pNext = t.top;
        t.top = p;
    }
    DataType Pop (Stack &t)
    {
        if (t.top == NULL)
        {
            cout << "Stack rong";
            reutrn 0;
        }
        DataType x;
        Node *p = t.top;
        t.top = t.top->pNext;
        x = p->data;
        delete p;
        return x;
    }
    
}