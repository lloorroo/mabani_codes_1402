#include <iostream>
using namespace std;

int main()
{
    int a[3][4], i, j, min, max;
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 3; j++)
            cin >> a[i][j];
    max = min = a[0][0];
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 3; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < min)
                min = a[i][j];
        }
    cout << "max=" << max << " min=" << min;
    return 0;
}