#include <iostream>
#include <string>
using namespace std;
template <class T>
class Stack
{
    T *list;
    int top;
    int capacity;

public:
    Stack(int size);
    void Init(T a);

    int size();
    int isEmpty();
    int isFull();
    void Push(T x);
    T Pop();
};
template <class T>
Stack<T>::Stack(int size)
{
    list = new T[size];
    capacity = size;
    top = 0;
}
template <class T>
int Stack<T>::size()
{
    return top;
}

template <class T>
int Stack<T>::isEmpty()
{
    return size() == 0;
}

template <class T>
int Stack<T>::isFull()
{
    return size() == capacity;
}
template <class T>
void Stack<T>::Push(T x)
{
    if (!isFull())
    {
        list[top] = x;
        top++;
    }
}
template <class T>
T Stack<T>::Pop()
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
    Stack <int> list(50);
    // Stack<string> list(50);
    int coso, so, sodu;
    cout << "nhap so can chyen vao bien so: " << endl;
    cin >> so;
    cout << "nhap so can chuyen vao bien co so: " << endl;
    cin >> coso;
    while (so != 0)
    {
        sodu = so % coso;
        list.Push(sodu);
        so = so / coso;
    }
    cout << "ket qua: ";
    while (!list.isEmpty())
        cout << list.Pop();
}