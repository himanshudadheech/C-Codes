#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    //    map<key,value> map_name_;
    map<int, int> m;
    //     Storing value in map
    for (int i = 0; i < n; i++)
    {

        //     	m[i]; //ye sirf key value dalega pr by default value 0 hogi!!
        //      m[arr[i]] = m[arr[i]]+1
        //                   supoose koi elemnt first time aay toh inital value 0 hogi but after it will increase

        m[arr[i]]++; // aboe line and this is same
    }
    // Traverse through map and print frequencies
    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }
}
