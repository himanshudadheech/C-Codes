#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void stringUpper(string s)
{

    int size = s.length();
    for (int i = 0; i < size; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }
    cout << s;
};
int main()
{

    string s = "hello world";

    stringUpper(s);

    //  int c = strcmp("hello", "hello");
    //    if (c)
    //     {
    //         cout << "no";
    //     }
    //     else
    //     {
    //         cout << "yes";
    //     }
    //  -----------------------------
    // int c = strlen('hello');
    // cout<<c;
    // ------------------------- *
    // char c = strlwr('Hello');
    // cout << c;
    // ------------------------

    // cout << strrev("Hello");
    // ------------ *
    // string a = "hello";
    // string b;
    // strcpy(b, "hello");
    // cout << b;
    // ---------------------------- *
    // cout << strcat("helo", "worl");
    // ------------------
}