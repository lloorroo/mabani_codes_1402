#include <iostream>
using namespace std;

int main()
{
    int i, mahdi[100];
    for (i = 0; i < 100; i++)
        cin >> mahdi[i];
    for (i = 0; i < 100; i += 3)
        cout << mahdi[i];
    return 0;
}