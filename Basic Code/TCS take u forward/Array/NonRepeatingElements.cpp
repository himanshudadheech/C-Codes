#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 2,8, 6,8,3};
    int n = sizeof(a)/sizeof(a[0]);
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    for (auto x : m)
    {
        if (x.second <= 1)
        {
            cout << x.first  << endl;
        }
    }
}