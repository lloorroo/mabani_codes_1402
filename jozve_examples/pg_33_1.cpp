#include <iostream>
#include <stdlib.h>
#define n 100

using namespace std;

int main()
{
    int i, x, a[n];
    for (i = 0; i <= n - 1; i++)
        cin >> a[i];
    cout << "enter x;";
    cin >> x;
    for (i = 0; i <= n - 1; i++)
        if (a[i] == x)
        {
            cout << "found";
            exit(0);
        }
    cout << "not found";
    return 0;
}