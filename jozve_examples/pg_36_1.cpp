#include <iostream>
using namespace std;

int main()
{
    int i;
    int a[10][10];
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
            a[i][j] = (i + 1) * (j + 1);
    }
    for (i = 0; i <= 9; i++)
        cout << a[i][5] << endl;
    return 0;
}