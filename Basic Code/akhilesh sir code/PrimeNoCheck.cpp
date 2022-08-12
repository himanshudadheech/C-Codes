#include <bits/stdc++.h>
using namespace std;

int checkPrime(int x)
{
    int n = x;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void countSum(int a, int b)
{
    int count = 0;
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        if (checkPrime(i))
        {
            cout << "yes : " << i << endl;
            sum = sum + i;
            count++;
        }
    }
    cout << "count : " << count << endl;
    cout << "sum : " << sum;
}

int main()
{
    int a = 100;
    int b = 200;

    countSum(a, b);
}