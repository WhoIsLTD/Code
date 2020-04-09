#include<iostream>
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
int isEmpty (Stack t)
{
    return t.top == NULL;
}
int isFull (Stack t)
{
    return t.top >= 100;
}
void Push (Stack &t, int x)
{
    if (!isFull(t))
    {
        t.list[t.top] = x;
        t.top++;
    }
}
    int Pop (Stack &t)
    {
        int x;
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