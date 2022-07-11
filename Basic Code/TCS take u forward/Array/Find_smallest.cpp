// Que : Find Min/Smallest Element In Array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    //   Declaring array
    int array[] = {6, 3, 9, -105, 2, 3, 1};
    //   Calculating Size Of Array
    int size_of_array = sizeof(array) / sizeof(array[0]);
    //   set min value as max of int
    int min = INT_MAX;

    for (int i = 0; i < size_of_array; i++)
    {
        //   	if array[i] is less than assuming min value
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    //   Printing min value from array
    cout << "Minimum  is : " << min;
    return 0;
}
