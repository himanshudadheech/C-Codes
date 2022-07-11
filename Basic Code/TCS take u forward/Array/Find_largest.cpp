// Que : Find max/largest element in array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {-5, -2, -34, 0, -5, -105};
    int max = INT_MIX;
    int l = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < l; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    cout << "Max is : " << max;
}
