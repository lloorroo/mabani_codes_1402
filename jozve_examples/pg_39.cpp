#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, d;
    cin >> a >> b >> c;
    if (!((a + b > c) && (a + c > b) && (b + c > a)))
    {
        cout << "cannot create triangle";
        exit(0);
    }
    cout << "mohit=" << (a + b + c);
    d = (a + b + c) / 2;
    cout << "area=" << sqrt(d * (d - a) * (d - b) * (d - c));
    return 0;
}