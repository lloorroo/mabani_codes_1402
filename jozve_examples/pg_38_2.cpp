#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "maximum is:" << ((a + b) + fabs(a - b)) / 2;
    return 0;
}