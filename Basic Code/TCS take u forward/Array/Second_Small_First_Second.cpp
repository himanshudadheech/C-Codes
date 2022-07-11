// C++ programm to find smallest and
// second smallest element in array
#include <bits/stdc++.h>
using namespace std;

int SecondMax(int a[], int size)
{
    int l = INT_MIN;
    int sl = INT_MIN;
    for (int i = 0; i < size; i++)
    { // checking a[i] >> l
        if (a[i] > l)
        {
            sl = l;
            l = a[i];
        }
        // checking  a[i] >>  sl && l;
        else if (a[i] > sl && a[i] < l)
        {
            sl = a[i];
        }
    }
    return sl;
}
int SecondMin(int a[], int size)
{
    int s = INT_MAX;
    int ss = INT_MAX;

    for (int i = 0; i < size; i++)
    { // checking a[i] << s
        if (s > a[i])
        {
            ss = s;
            s = a[i];
        }
        // checking  a[i] <<  s && ss;
        else if (a[i] < ss && a[i] > s)
        {
            ss = a[i];
        }
    }
    return ss;
}

int main()
{
//    int a[] = {-3, -3, -2, -1, 1, 2, 3, 3, 4};
int a[] = {-3,-2,-1,0};
    int size = sizeof(a) / sizeof(a[0]);
    // Function used For Second Max
    cout << "Second Largest is " << SecondMax(a, size) << endl;
    // Function used For Second Min
    cout << "Second Smallest is " << SecondMin(a, size) << endl;
}
