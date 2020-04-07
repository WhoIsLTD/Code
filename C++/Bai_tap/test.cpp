#include <iostream>
using namespace std;
class phanso
{
private:
    int ts, ms;

public:
    phanso();
    phanso(phanso &p);
    bool operator<(phanso &p);
    friend ostream &operator<<(ostream &mh, phanso &p);
    friend istream &operator>>(istream &bp, phanso &p);
};
phanso::phanso()
{
    ts = 0;
    ms = 1;
}
phanso::phanso(phanso &p)
{
    ts = p.ts;
    ms = p.ms;
}
bool phanso::operator<(phanso &p)
{
    return (ts * p.ms < ms * p.ts);
}
ostream &operator<<(ostream &mh, phanso &p)
{
    mh << p.ts << "/" << p.ms;
    return mh;
}
