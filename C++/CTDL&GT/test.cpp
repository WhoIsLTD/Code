#include <iostream>
using namespace std;
struct Queue
{
    int list[100];
    int front;
    int rear;
};
void Init(Queue &q)
{
    q.front = q.rear = 0;
}
int isEmpty(Queue q)
{
    if ( q.front == q.rear && q.rear == 0)
        return 1;
    
    return 0;
}
int isFull(Queue q)
{
    if (q.front == q.rear && q.rear != 0)
        return 1;
    return 0;
}
void EnQueue(Queue &q, int x)
{
    if (isFull(q))\
        return 0;
    q.list[q.rear] = x;
    q.rear++;
    if (q.rear = ;
}
int DeQueue(Queue &q)
{
    int x;
    if (isEmpty(q))
    {
        cout << "Queue rong";
        return 0;
    }
    X = q.list[q.front]
}
int Front(Queue q)
{
    if (isEmpty(q))
    {
        cout << "Queue rong"
    }
}
void uoc(Stack &s, int n)
{
    int i;
    Init(s);
    for (i = 1; i <= n; i++)
        if (n % i == 0)
            Push(s, i);
    while (!isEmpty(s))
    {
        cout << Pop(s);
        cout << "\t";
    }
}
void Chuso(Stack &p, int n)
{
    int c;
    Init(p);
    while (n != 0)
    {
        c = n % 10;
        Push(p, c);
        n = n / 10;
    }
}
void Reverse(Stack &p, Stack &m)
{
    Init(m);
    int x;
    while (!isEmpty(p))
    {
        x = Pop(p);
        Push(m, x);
    }
    while (!isEmpty(m))
        cout << Pop(m);
}
int main()
{
    Stack t, s, p, m;
    int n;
    cout << "nhap vao so nguyen n:" << endl;
    cin >> n;
    cout << "cac uoc cua n la:" << endl;
    uoc(s, n);
    cout << "\nSo nghich dao cua n la: " << endl;
    Chuso(p, n);
    Reverse(p, m);
}