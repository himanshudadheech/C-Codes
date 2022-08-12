#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 4;
    int b = 8;
    int hcf;
    if (b > a)
    {
        int t = b;
        b = a;
        a = t;
    }

    for (int i = 1; i <= b; ++i)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    if (hcf == 1)
    {
        cout << "coprime";
    }
    else
    {
        cout << "noCoprime";
    }
}