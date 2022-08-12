#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int f = 0;
    int m = 0;
    m = n / 2;

    for (int i = 2; i <= m; ++i)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        cout << "Prime";
    }
}