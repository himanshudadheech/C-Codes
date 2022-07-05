#include <bits/stdc++.h>
using namespace std;
// class name is Ascii
class Ascii
{
public:
    void value()
    {
        char c = 'A';
        cout << "Ascii value of " << c << " is : " << int(c) << '\n';
    }
};
// ; at the end of class is important
int main()
{
    Ascii object;
    object.value();
}
