#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a[] = {-8, 1, 4, 6, 10, 45};

    int n = 6;
    int low = 0;
    int high = n - 1;

    int e = 16;

    while (low < high)
    {
        int sum = a[high] + a[low];
        if (e == sum)
        {
            cout << "Found" << e;
            break;
        }
        else if (sum > e)
        {
            high = high - 1;
        }
        else if (e < sum)
        {
            low = low + 1;
        }
        if (low > high)
        {
            cout << "not found";
            break;
        }
    }
}