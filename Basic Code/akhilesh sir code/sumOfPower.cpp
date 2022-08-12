#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int sum = 0;

    for (int i = t; i > 0; i--)
    {

        sum = sum + i *i *i*i;
    }
    cout << "sum :" << sum;
}