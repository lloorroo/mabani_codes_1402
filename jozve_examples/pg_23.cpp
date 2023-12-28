#include <iostream>
using namespace std;

int main()
{
    int f1, f2, fib, i = 3, n;
    f1 = 1;
    f2 = 1;
    fib = 1;
    cin >> n;
    cout << "fib1: 1\n"
         << "fib2: 1\n";
    fib = f1 + f2;
    while (fib <= n)
    {
        cout << "fib" << i << ": " << fib << "\n";
        f1 = f2;
        f2 = fib;
        fib = f1 + f2;
        i++;
    }
    return 0;
}