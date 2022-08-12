#include <bits/stdc++.h>
using namespace std;
int fact(int);
int fact(int x)
{
    int f = 1;
    while (x)
    {
        f = f * x;
        x--;
    }
    return f;
}
int main()
{
    int f;

    int k;
    int n;
    cin >> n;
    cin >> k;

    int result = fact(n) / (fact(n - k) * fact(k));

    cout << result;
}