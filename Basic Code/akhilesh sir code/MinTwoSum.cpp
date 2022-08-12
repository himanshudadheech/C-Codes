#include <bits/stdc++.h>
using namespace std;
int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    while (b != -1)
    {
        cout << sum(a, b);
        a = b;
        cin >> b;
    }
}