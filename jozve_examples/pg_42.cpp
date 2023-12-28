#include <iostream>
using namespace std;

int complete(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n / 2; i++)
        if (n % i == 0)
            sum += i; // or sum=sum+i;
    if (sum == n)
        return (1); // or return 1;
    else
        return (0);
}

int main()
{
    int n;
    cout << "Enter Number";
    cin >> n;
    if (complete(n) == 1) // or if(complete(n))
        cout << "it`s complete";
    else
        cout << "it`s not complete";
    return 0;
}