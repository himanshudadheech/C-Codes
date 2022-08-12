#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cout << "Enter character : ";
    cin >> a;

    int value = int(a);
    if (value >= 48 && value <= 57)
    {
        cout << "number";
    }
    else if (value >= 65 && value <= 91)
    {
        cout << "greater";
    }
    else if (value >= 97 && value <= 122)
    {
        cout << "small";
    }
    else
    {
        cout << "non alphabetic";
    }
}