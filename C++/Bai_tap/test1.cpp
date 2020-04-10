#include<iostream>
using namespace std;
template <class T>
class Stack
{
    T list[100];
    int top;
public:
    void Init(T a);

    int isEmpty();
    int isFull();
    void Push(T x);
    T Pop();
};
template <class T>
void Stack<T> ::Init(T a)
{
    top = NULL;
}
template <class T>
int Stack<T> ::isEmpty ()
{
    return top == NULL;
}
template <class T>
int Stack<T> ::isFull ()
{
    return top >= 100;
}
template <class T>
void Stack<T> ::Push (T x)
{
    if (!isFull())
    {
        list[top] = x;
        top++;
    }
}
template <class T>
    T Stack<T>:: Pop ()
    {
        T x;
        if (!isEmpty())
        {
            top--;
            x = list[top];
        }
        return x;
    }
int main()
{
    Stack<int> list;
    int coso, so, sodu;
    // Init(list);
    cout << "nhap so can chyen vao bien so: "<< endl;
    cin >> so;
    cout << "nhap so can chuyen vao bien cow so: " << endl;
    cin >> coso;
    while (so != 0)
    {
        sodu = so % coso;
        list.Push(sodu);
        so = so/coso;
    }
cout << "ket qua: ";
while (!list.isEmpty())
    cout << list.Pop();

}