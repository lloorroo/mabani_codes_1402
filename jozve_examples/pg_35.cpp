#include <iostream>
using namespace std;

int main()
{
    int i, j, a[4][4];
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            cin >> a[i][j];
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    for (i = 0; i < 4; i++)
        cout << a[i][i] << " ";
    return 0;
}