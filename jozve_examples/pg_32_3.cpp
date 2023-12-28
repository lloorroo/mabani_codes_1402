#include <iostream>
using namespace std;

int main()
{
    int i, sum = 0, n;
    for (i = 1; i <= 10; i++)
    {
        cin >> n;
        sum = sum + n;
    }
    cout << "sum:" << sum << endl;
    cout << "average:" << sum / 10;
    return 0;
}