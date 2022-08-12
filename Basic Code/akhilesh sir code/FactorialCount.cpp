#include <bits/stdc++.h>
using namespace std;

int main()
{

    int ll, ul;
    cin >> ll;
    cin >> ul;
    int count = 0;
    int sum = 0;
    int f = 1;

    for (int i = 1; f < ul; i++)
    {
        f = f * i;
        if (f <= ul && f >= ll)
        {
            sum = sum + f;
            count++;
        }
    }
    cout << "sum : " << sum << endl
         << "count : " << count;
}