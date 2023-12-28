#include <iostream>
#include <conio.h>
#include <math.h>
void root(int, int, int);

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    root(a, b, c);
    return 0;
}

void root(int a, int b, int c)
{
    float delta;
    delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        cout << "x1=" << (-b - sqrt(delta)) / (2 * a) << endl;
        cout << "x2=" << (-b + sqrt(delta)) / (2 * a);
    }
    else if (delta == 0)
        cout << "x=" << -b / (2 * a);
    else
        cout << "no Root";
}