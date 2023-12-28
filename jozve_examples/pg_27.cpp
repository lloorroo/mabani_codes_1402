#include <iostream>
using namespace std;

int main()
{
    char n;
    cin >> n;
    switch (n)
    {
    case 'a':
        cout << 20;
        break;
    case 'b':
        cout << 19;
        break;
    case 'c':
        cout << 18;
        break;
    case 'd':
        cout << "under 18";
        break;
    default:
        cout << "Invalid input";
    }
    return 0;
}