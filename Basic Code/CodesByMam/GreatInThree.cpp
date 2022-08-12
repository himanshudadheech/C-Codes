#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int b = 15;
    int c = 16;

    if (a > b && a > c)
    {
        cout << "A";
    }
    else if (b > a && b > c)
    {
        cout << "b";
    }
    else if (c > a && c > b)
    {
        cout << "c";
    }
}