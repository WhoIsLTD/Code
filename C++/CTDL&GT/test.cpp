#include <iostream>
using namespace std;
struct Queue
{
    int list[100];
    int front, rear;
};
void Init(Queue &q)
{
    q.front = q.rear = 0;
}
int isEmpty(Queue q)
{
    if (q.front == q.rear && q.rear == 0)
        return 1;
    return 0;
}
int isFull(Queue q)
{
    if (q.front == q.rear && q.rear != 0)
        return 1;
    return 0;
}
int EnQueue(Queue &q, int x)
{
    if (isFull(q))
        return 0;
    q.list[q.rear] = x;
    q.rear++;
    if (q.rear == 100)
        q.rear = 0;
    return 1;
}
int DeQueue(Queue &q)
{
    if (isEmpty(q))
    {
        cout << "Queue rong";
        return 0;
    }
    int t = q.list[q.front];
    q.front++;
    if (q.front == 100)
        q.front = 0;
    return t;
}
int Front(Queue q)
{
    if (isEmpty(q))
    {
        cout << "Queue rong";
        return 0;
    }
    return q.list[q.front];
}
void tinhTong(Queue q)
{
    int s = 0, x;
    while (q.front != q.rear && q.rear != 0)
    {
        s += DeQueue(q);
    }
    cout << s << endl;
}
int size(Queue q)
{
    if (q.rear >= q.front)
        return (q.rear - q.front);
    else
    {
        return 100 - (q.front - q.rear);
    }
}
int main()
{
    Queue t;
    Init(t);
    EnQueue(t, 5);
    EnQueue(t, 4);
    EnQueue(t, 6);
    EnQueue(t, 7);
    cout << size(t) << endl;
    // cout << Front(t) << endl;
    tinhTong(t);
}