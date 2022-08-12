#include <bits/stdc++.h>
using namespace std;
int perfectSquare(int x)
{
    int s = (int)sqrt(x);
    return (s * s == x);
}
int Fibonacii(int x)
{
    return perfectSquare(5 * x * x + 4) || perfectSquare(5 * x * x - 4);
}
int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        if (Fibonacii(n))
        {
            cout << "yes";
        }
        else
        {
            cout << "no";
        }
    }
}