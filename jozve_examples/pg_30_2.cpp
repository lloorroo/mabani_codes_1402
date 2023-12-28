#include <iostream>
using namespace std;

int main()
{
    int m, n, p, f, t;
    cin >> m >> n;
    f = m;
    p = n;
    do
    {
        t = m % n;
        m = n;
        n = t;
    } while (t != 0);
    cout << "B.M.M=" << m << endl;
    cout << "K.M.M=" << (p * f) / m;
    return 0;
}