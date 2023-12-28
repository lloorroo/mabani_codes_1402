#include <iostream>
using namespace std;

int main()
{
    int i, parsa[6];
    for (i = 0; i <= 5; i++)
        cin >> parsa[i];
    for (i = 5; i >= 0; i--)
        cout << parsa[i];
    return 0;
}