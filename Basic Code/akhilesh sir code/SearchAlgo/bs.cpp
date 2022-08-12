#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {-8, 1, 4, 6, 10, 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    int low = 0;
    int high = n - 1;

    int sum = 16;

    while (low < high)
    {
        int x = (arr[low] + arr[high]);
        if (x == sum)
        {
            cout << "Got it : " << sum << " " << arr[low] << " " <<arr[high];
            break;
        }
        else if (x < sum)
        {
            low = low + 1;
        }
        else if (x > sum)
        {
            high = high + 1;
        }
        if (low > high)
        {
            cout << "element not found";
            break;
        }
    }
}