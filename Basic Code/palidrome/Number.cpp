#include <iostream>
using namespace std;
int main()
{
    int n = 123;
    cout << "original " << n << "\n";
    int reminder, r = 0;
    while (n != 0)
    {
        reminder = n % 10;
        r = r * 10 + reminder;
        n = n / 10;
    }

    cout << "reversed " << r << "\n";
}
