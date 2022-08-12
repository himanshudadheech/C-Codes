#include <bits/stdc++.h>
using namespace std;
int main()
{

    char s[] = "hello world its me";
    int n = strlen(s);

    for (int i = 0; i < n; i++)
    {
        s[0] = toupper(s[0]);

        if (s[i] == ' ' && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
        {
            s[i + 1] = toupper(s[i + 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i];
    }
}