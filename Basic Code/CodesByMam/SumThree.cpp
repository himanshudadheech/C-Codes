#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    a = 123;
    int sum = 0;
    int n;
    while (a>0)
    {
        n = a % 10;
        sum += n;
        a = a / 10;
    }
    cout << sum;
}