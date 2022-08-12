#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;
    int c = 12;

    if (a + b > c)

    {
        if (b + c > a)
        {
            if (a + c > b)

            {
                cout << "yes";
            }
            else
            {
                cout << "no";
            }
        }
        else
        {
            cout << "no";
        }
    }
    else
    {
        cout << "no";
    }
}