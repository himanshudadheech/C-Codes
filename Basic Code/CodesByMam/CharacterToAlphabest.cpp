#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cout << "Enter character : ";
    cin >> a;

    int value = int(a);
    if (value >= 65 && value <= 127)
    {
        cout << "yes";
    }
    else
    {
        cout << "No";
    }
}