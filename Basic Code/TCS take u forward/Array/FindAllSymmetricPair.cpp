#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int a[5][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int f = a[i][0];
        int s = a[i][1];
        if (m.find(s) != m.end() && m[s] == f)
        {
            cout << "(" << f << " " << s << ")"
                 << " ";
        }
        else
        {
            m[f] = s;
        }
    }
   
}