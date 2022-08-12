#include <bits/stdc++.h>
using namespace std;
int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int f = 1;
    int n;
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        f = f * i;
    }
    cout << f;
}