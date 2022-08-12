#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three number : ";
    cin >> a;
    cin >> b;
    cin >> c;

    int a1 = a * a;
    int b1 = b * b;
    int c1 = c * c;

    if (a1 + b1 >= c1 && b1 + c1 >= a1 && a1 + c1 >= b1)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}
