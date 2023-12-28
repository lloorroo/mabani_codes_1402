#include <iostream>
using namespace std;

int main()
{
    int i, a, b, c, d;
    for (i = 1000; i <= 9999; i++)
    {
        a = i % 10;         // yekan
        b = (i / 10) % 10;  // dahgan
        c = (i / 100) % 10; // sadgan
        d = i / 1000;       // hezargan
        if ((a == d) && (b == c))
            cout << i << endl;
    }
    return 0;
}