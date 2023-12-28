#include <iostream>
using namespace std;

int main()
{
    int x, y, i, j;
    cin >> x >> y;
    j = 1;
    for (i = 1; i <= y; i++)
        j = j * x;
    cout << j;
    return 0;
}
