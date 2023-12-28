#include <iostream>
using namespace std;

int main()
{
    int i, mehdi[100];
    for (i = 0; i <= 99; i++)
        cin >> mehdi[i];
    for (i = 0; i <= 99; i++)
        if (mehdi[i] == i)
            cout << mehdi[i] << " ";
    return 0;
}