#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;
    cout << sin(sqrt((log(x + y * x * x)) / (pow(x, 3) + sqrt(x + y * y))));
    return 0;
}