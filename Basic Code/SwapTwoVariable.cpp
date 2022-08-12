#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    //   With Temp Variable
    int temp;
    temp = a;
    a = b;
    b = temp;
    // Without temp Variable;
    a = a + b;
    b = a - b;
    a = a - b;
}