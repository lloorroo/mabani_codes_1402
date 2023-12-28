#include <iostream>
using namespace std;

int main()
{
    int r, m, a;
    const int PI = 3.14;
    cin >> r;
    m = PI * r * r;
    a = 2 * PI * r;
    cout << "perimeter=" << m << endl
         << "area=" << a;
    return 0;
}