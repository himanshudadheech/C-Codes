#include <bits/stdc++.h>
using namespace std;
int main()
{
    int feq[10] = {0};
    int a[] = {78, 92, 43, 9, 10};
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        while (a[i])
        {
            feq[a[i] % 10]++;
            a[i] = a[i] / 10;
        }
    }
    for (int i = 9; i >= 0; i--)
    {
        while (feq[i])
        {
            cout << i;
            feq[i]--;
        }
    }
}