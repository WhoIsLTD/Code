#include<iostream>
using namespace std;
struct Queue
{
    int list[N];
    int o, i;
};
int DeQueue(Queue &q)
{
    int t = q.list[q.o];
    q.o++;
    if (q.o == 100)
        q.o = 0;
    return t;
}
int demPT(Queue q)
{
    int dem = 0, x;
    while (q.o != q.i && q.i != 0)
    {
        if(DeQueue(q)> 0)
            dem++;
    }
    return dem;
}
