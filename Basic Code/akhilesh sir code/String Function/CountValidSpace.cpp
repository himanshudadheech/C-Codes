#include <bits/stdc++.h>
using namespace std;

void countSpace(string a)
{
    int size = a.length();
    int count = 0;
    int startSpace = 0;
    if (int(a[0]) == 32)
    {
        startSpace++;
    }
    int endSpace = 0;
    if (int(a[size - 1] == 32 && a[size] == '\0'))
    {
        endSpace++;
    }
    for (int i = 0; i < size; i++)
    {
        if ((int(a[i]) == 32 && int(a[i + 1] != 32)))
        {
            count++;
        }
        else if ((int(a[i] == 32 && int(a[i + 1]) == 46)))
        {
            count--;
        }
    }
    cout << count - startSpace - endSpace;
}

int main()
{
    string a = "A cleaver fox jumps over the lazy  dog  ";
    countSpace(a);
}