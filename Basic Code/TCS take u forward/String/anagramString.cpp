#include <bits/stdc++.h>
using namespace std;
void isAnagram(string s1, string s2)
{
    int l1, l2;
    l1 = s1.length();
    l2 = s2.length();

    int a[26] = {0};
    int b[26] = {0};
    int f = 0;
    if (l1 != l2)
    {
        f = 1;
    }

    for (int i = 0; i < l1; i++)
    {
        a[s1[i] - 'a']++;
        b[s2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
int main()
{
    string s1 = "heman";
    string s2 = "manhe";

    isAnagram(s1, s2);
}
