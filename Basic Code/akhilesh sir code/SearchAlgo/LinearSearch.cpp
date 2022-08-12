#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {9, 78, 654, 667, 34, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 854;
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            cout << "Found : " << i;
            break;
        }
        }
}