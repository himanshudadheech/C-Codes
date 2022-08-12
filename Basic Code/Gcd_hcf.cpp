#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int gcd;

    for (int i = 0; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    cout << "gcd" << gcd;
}