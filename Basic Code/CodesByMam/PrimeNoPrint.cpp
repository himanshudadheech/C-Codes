#include <bits/stdc++.h>
using namespace std;
int prime(int n)
{

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    for (int i = a; i <= b; i++)
    {

        if (prime(i))
        {
            cout << i << endl;
        }
    }
}