#include <iostream>
using namespace std;

int main()
{
    int c, a;
    cin >> a;
    c = 0;
    while (a != 0)
    {
        c = c * 10 + (a % 10);
        a = a / 10;
    }
    cout << c;
    return 0;
}