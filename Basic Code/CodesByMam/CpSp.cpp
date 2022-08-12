#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cp;
    cout << "Enter cp";
    cin >> cp;
    int sp;
    cout << "Enter sp";
    cin >> sp;
    int p = ((sp - cp) * 100);
    if (p > 1)
    {
        int pp = (p) / cp;
        cout
            << "profit : " << pp;
    }
    else
    {
        int pp = (p) / cp;
        cout
            << "loss : " << pp;
    }
}