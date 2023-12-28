#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int a[8] = {-6, 5, 9, 13, 20, 21, 25, 28};
    int n = 100;
    b_search(a, n);
    return 0;
}

int b_search(int a[], int n)
{
    int x = 25;
    int flag = 0;
    int i = 0;
    int j = n - 1;
    int mid = (i + j) / 2;
    while ((i < j) && !(flag))
    {
        if (x == a[mid])
        {
            cout << "found";
            flag = 1;
        }
        else if (x < a[mid])
            j = mid - 1;
        else
            i = mid + 1;
        mid = (i + j) / 2;
    }
    if (flag == 0)
        cout << "not found";
    return 0;
}