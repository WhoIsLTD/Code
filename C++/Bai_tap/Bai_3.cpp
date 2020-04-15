#include <iostream>
using namespace std;

struct Stack
{
    int *list;
    int top;
};

void Init(Stack &S) // Khoi tao Stack
{
    S.top = NULL;
}

int isEmpty(Stack S)
{
    if (S.top == 0)
        return 1; // Stack rong
    else
        return 0;
}

int isFull(Stack S)
{
    if (S.top >= 100)
        return 1; // Stack day
    else
        return 0;
}

void push(Stack &S, int x)
{
    if (!isFull(S)) // stack chua day
    {
        S.list[S.top] = x;
        S.top++;
    }
}

int pop(Stack &S)
{
    int x;
    if (!isEmpty(S)) // Stack khac rong
    {
        S.top--;
        x = S.list[S.top];
    }
    return x;
}

int main()
{
    int n, i, c;
    Stack S, P, M;
    Init(S);
    Init(P);
    Init(M);
    cout << " Nhap vao 1 so nguyen n = ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            push(S, i);
        }
    }
    while (!isEmpty(S))
    {
        cout << pop(S);
    }
    // cout << " So nguoc lai cua " << n << " la:\n";
    // while (n != 0)
    // {
    //     c = n % 10;
    //     push(M, c);
    //     n = n / 10;
    // }
    // while (!isEmpty(M))
    //     push(P, pop(M));
    // while (!isEmpty(P))
    //     cout << pop(P);
}