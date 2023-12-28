#include <iostream>
using namespace std;

int main()
{
    int i;
    for (i = 1; i < 10; i++)
    {
        cout << "*" << endl;
        if (i % 5 == 0)
            break;
    }
    return 0;
}