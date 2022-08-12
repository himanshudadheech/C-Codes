#include <bits/stdc++.h>
using namespace std;
int main()
{

    char s[] = "hello";
    char sn[] = "olleh";

    map<int, int> m;
    for (int i = 0; i < 5; i++)
    {
        m[s[i]]++;
    }
    vector<int> v;
    for (auto x : m)
    {
        v.push_back(x.second);
    }
    map<int, int> m2;
    for (int i = 0; i < 5; i++)
    {
        m2[sn[i]]++;
    }
    vector<int> b;
    for (auto y : m2)
    {
        b.push_back(y.second);
    }
    for (int i = 0; i < 5; i++)
    {
        if (v[i] == b[i])
        {
            cout << "yes";
        }
    }
}