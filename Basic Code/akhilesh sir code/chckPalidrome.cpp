#include <bits/stdc++.h>
using namespace std;

int checkPalidrome(int x)
{
    int n = x;
    int ans;
    int last;
    int reminder, r = 0;
    while (n != 0)
    {
        reminder = n % 10;
        r = r * 10 + reminder;
        n = n / 10;
    }
    if (x == r)
    {
        ans = 1;
    }
    else
    {
        ans = 0;
    }
    return ans;
}

void countSum(int a, int b)
{
    int count = 0;
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        if (checkPalidrome(i))
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