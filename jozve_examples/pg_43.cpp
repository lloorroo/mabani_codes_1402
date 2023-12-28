#include <iostream>
int kk(int n);
using namespace std;

int main()
{
    int i;
    for (i = 1000; i <= 9999; i++)
        if (kk(i) == 1)
            cout << i << endl;
    return 0;
}


int kk(int n)
{
    if ((n % 10 == n / 1000) && ((n / 100) % 10 == (n / 10) % 10))
        return 1;
    else
        return 0;
}