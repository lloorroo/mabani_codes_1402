#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max;
    cout << " Enter your numbers ";
    cin >> a >> b >> c;
    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    cout << " The max is " << max << endl;
    return 0;
}