#include <iostream>
using namespace std;
class ps
{
    int ts, ms;

public:
    ps UCLN();
    //toán tử +
    ps operator+(ps a)
    {
        ps c;
        int ts1, ms1;
        c.ts = a.ts * ms + ts * a.ms;
        c.ms = a.ms * ms;
        return c;
    }
    ps operator-();
    ps operator*();
    //  ps operator/();
    void inps();
    void nhapps();
};
// tìm ucln
ps ps ::UCLN()
{
    int t, m;
    t = abs(ts);
    m = abs(ms);
    while (t != m)
    {
        if (t > m)
            t = t - m;
        else
            m = m - t;
    }
    ts = ts / t;
    ms = ms / t;
}
// toán tử trừ
// ps ps ::operator-()
// {
//     ps a, b, c;
//     c.ts = a.ts * b.ms - b.ts * a.ms;
//     c.ms = a.ms * b.ms;
//     return c;
// }
// // toán tử nhân
// ps ps ::operator*()
// {
//     ps c;
//     ts = ts * ts;
//     ms = ms * ms;
//     return c;
// }
// toán tử chia
// ps ps ::operator/()
// {
//     ps a, b, c;
//     c.ts = a.ts * b.ms;
//     c.ms = a.ms * b.ts;
//     return c;
// }
// in phân số
void ps ::inps()
{
    cout << ts << "/" << ms << endl;
}
// nhập phân số
void ps ::nhapps()
{
    cout << "Nhap vao tu so: ";
    cin >> ts;
    do
    {
        cout << "Nhap vao mau so: ";
        cin >> ms;
    } while (ms == 0);
}

int main()
{
    ps a, b, c;
    a.nhapps();
    b.nhapps();
    a.inps();
    b.inps();
    cout << "cong: " << endl;
    c = a + b;
    c.UCLN();
    c.inps();
    // cout << "tru: " << endl;
    // c = a - b;
    // c.inps(UCLN(c));
    // cout << "nhan: " << endl;
    // c = a * b;
    // c.UCLN();
    // c.inps();
    // cout << "chia: ";
    // c = a / b;
    // c.inps(UCLN(c));
}