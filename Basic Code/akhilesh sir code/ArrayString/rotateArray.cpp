#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {10, 3, 5, 6, 2};
    int n = 5;
    int r[n], l[n];
    l[0] = 1;
    r[n - 1] = 1;

    for (int i = n - 2; i >= 0; i--)
    {
        r[i] = r[i + 1] * a[i + 1];
    }
    for (int i = 1; i < n; i++)
    {
        l[i] = l[i - 1] * a[i - 1];
    }
    for (int i = 0; i < n; i++)
    {

        cout << r[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {

        cout << l[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {

        cout << (r[i] * l[i]) << " ";
    }
}