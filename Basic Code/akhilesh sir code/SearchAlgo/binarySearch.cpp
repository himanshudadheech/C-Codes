#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int low = 0;
    int high = n - 1;

    int searchElement = 6;

    while (low < high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == searchElement)
        {
            cout << "Got it : " << mid;
            break;
        }
        else if (arr[mid] < searchElement)
        {
            low = mid + 1;
        }
        else if (arr[mid] > searchElement)
        {
            high = mid - 1;
        }
        if (low > high)
        {
            cout << "element not found";
            break;
        }
    }
}