#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 3;

    int a[n][n] = {1, 0, 0, 0, 1, 0, 1, 1, 2};
    // int a[3][3] = {1, 0, 1, 0, 1, 0, 1, 1, 2};

    int flagU = 0;
    int flagL = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j && a[i][j] != 0)
            {

                flagU = 1;
            }
        }
    }
    if (flagU)
    {
        cout << "no";
    }
    else
    {
        cout << "yes";
    }
}