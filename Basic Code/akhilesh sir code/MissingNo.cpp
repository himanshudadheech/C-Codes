#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;
    int isum = (n * (n + 1)) / 2;
    int sum = 0;
    int t;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> t;
        sum = sum + t;
    }
    int fs = isum - sum;
    cout << "missing" << fs;
}
