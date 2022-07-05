#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello Hi welcome";
    cout << "before original : " << s << "\n";
    int length = s.length();
    int vowel = 0, consonant = 0, whitespace = 0;
    // converting it to lower case for our easiness
    for (int i = 0; i < length; i++)
    {
        s[i] = towlower(s[i]);
    }
    cout << "after Lower case : " << s << "\n";
    // checking or counting vowel consonant
    for (int i = 0; i < length; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            ++vowel;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            ++consonant;
        }
        else if (s[i] == ' ')
        {
            ++whitespace;
        }
    }
    // printing count value
    cout << "vowel " << vowel << "\n";
    cout << "consonant " << consonant << "\n";
    cout << "whitespace " << whitespace << "\n";
}
