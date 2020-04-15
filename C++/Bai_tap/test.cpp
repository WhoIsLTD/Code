#include <iostream>
using namespace std;
struct Stack
{
    int list[100];
    int top;
};
void Init(Stack &t)
{
    t.top = NULL;
}
int isEmpty(Stack t)
{
    return t.top == NULL;
}
int isFull(Stack t)
{
    return t.top >= 100;
}
void Push(Stack &t, int x)
{
    if (!isFull(t))
    {
        t.list[t.top] = x;
        t.top++;
    }
}
int Pop(Stack &t)
{
    int x;
    if (!isEmpty(t))
    {
        t.top--;
        x = t.list[t.top];
    }
    return x;
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