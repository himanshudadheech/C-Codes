#include <bits/stdc++.h>
#include <stack>
using namespace std;
void reversedString(string s)
{
    // initializing stack<datatype> name;
    stack<string> st;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        string word = "";
        // checking for space(not get space then add it to word) and length
        while (s[i] != ' ' && i < l) // Note: here s[i] != ' ' (single quote because space  is character)
        {

            word += s[i];
            i++;
        } // push word in stack
        st.push(word);
    }
    // Printing the stack or word in reverese from string with help of stack pop and top;

    while (!st.empty()) // stack is not empty
    {
        cout << st.top() << " ";
        // pop is imp otherwise it will always show top as last element
        st.pop();
    }
    cout << endl;
}
int main()
{
    string s = "is hello";
    cout << "before Original : " << s << endl;
    cout << "After Reversed : ";
    reversedString(s);
}
