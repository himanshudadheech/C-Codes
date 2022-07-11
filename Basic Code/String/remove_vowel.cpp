#include <bits/stdc++.h>
using namespace std;
string removed_vowel_string(string str)
{

    for (int i = 0; i < str.length(); i++)
    {
        str[i] = towlower(str[i]);
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str = str.substr(0, i) + str.substr(i + 1);
            i--;
        }
    }
    return str;
}
int main()
{
    string s = "hello wOrld";
    cout << "original : " << s << endl;

    cout << "After : " << removed_vowel_string(s) << endl;
}
