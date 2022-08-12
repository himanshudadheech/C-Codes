#include <bits/stdc++.h>
using namespace std;
int main()
{
    int max = INT_MIN;
    int secondLargest = INT_MIN;
    int input;
    cout << "enter input :" << endl;

    while (input != -1)
    {
        cin >> input;
        if (max < input)
        {
            secondLargest = max;
            max = input;
        }
        else if (secondLargest < input)
        {
            secondLargest = input;
        }
    }
    cout << "max " << max << endl;
    cout << "second max " << secondLargest << endl;
}