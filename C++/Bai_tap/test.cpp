#include<iostream>
using namespace std;
template <class T>
struct Stack
{
    T list[100];
    int top;
};
void Init(Stack &t)
{
    t.top = NULL;
}
int isEmpty (Stack t)
{
    return t.top == NULL;
}
int isFull (Stack t)
{
    return t.top >= 100;
}
template <class T>
void Push (Stack &t, T x)
{
    if (!isFull(t))
    {
        t.list[t.top] = x;
        t.top++;
    }
}
template <class T>
    T Pop (Stack &t)
    {
        T x;
        if (!isEmpty(t))
        {
            t.top--;
            x = t.list[t.top];
        }
        return x;
    }
int main()
{
    Stack t;
    int coso, so, sodu;
    Init(t);
    cout << "nhap so can chyen vao bien so: "<< endl;
    cin >> so;
    cout << "nhap so can chuyen vao bien cow so: " << endl;
    cin >> coso;
    while (so != 0)
    {
        sodu = so % coso;
        Push(t, sodu);
        so = so/coso;
    }
cout << "ket qua: ";
while (!isEmpty(t))
    cout << Pop(t);

}