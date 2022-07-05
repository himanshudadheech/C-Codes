#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 65; i <= 90; ++i)
    {
        cout << "CAPITAL "
             << "----- || -----" << char(i) << " : " << int(i) << "\n";
    }
    for (int j = 97; j <= 122; ++j)
    {
        cout << "SMALL   "
             << "----- || -----" << char(j) << " : " << int(j) << "\n";
    }
}
