#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {0, 1, 0, 0, 0, 1, 1, 1, 0};
    int n = sizeof(a) / sizeof(a[0]);
    int countOne = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            countOne++;
        }
    }
    for (int i = 0; i < n - countOne; i++)
    {
        a[i] = 0;
    }
    for (int i = n - countOne; i < 10; i++)
    {
        a[i] = 1;
    }

    for (int i = 0; i <= n; i++)
    {
        cout << a[i] << " ";
    }
}