#include <bits/stdc++.h>
using namespace std;

void decToBinary(int n)
{
    int binary[32]; // use to array to store binary number

    int i = 0;
    while (n > 0)
    {
        binary[i] = n % 2; // storing reminder
        n = n / 2;
        i++;
    }
    //	printing binary number from array in reverse order;
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }
}

// Driver program to test above function
int main()
{
    int n = 17;
    decToBinary(n);
    return 0;
}
