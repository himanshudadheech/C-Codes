#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 2, 4, 3, 1, 2};
    int n = sizeof(a) / sizeof(a[0]);

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    for (auto x : m)
    {
        while (x.second != 0)
        {
            cout << x.first << " ";
            x.second--;
        }
    }
}