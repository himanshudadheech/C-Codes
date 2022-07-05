#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "naman";
    int l = s.length();
    int flag;
    for (int i = 0; i < l / 2; i++)
    {
        if (s[i] != s[l - i - 1])
        {
            flag = 1;
        }
        break;
    }
    if (flag)
    {
        cout << "no";
    }
    else
    {
        cout << "yes";
    }
}
