#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 2007;

    if (a % 100 == 0)
    {
        if (a % 400 == 0)
        {
            cout << "yes";
        }
        else
        {
            cout << "No";
        }
    }
    else if (a % 4 == 0)
    {
        cout << "yes";
    }
    else
    {
        cout << "No";
    }
}