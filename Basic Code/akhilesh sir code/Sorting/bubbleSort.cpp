#include <bits/stdc++.h>
using namespace std;
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}
void BubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {

        if (a[i] >= a[i + 1])
        {
            int temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }
    print(a, n);
}
int main()
{
    int a[] = {7, 8, 11, 12, 10};
    int n = sizeof(a) / sizeof(a[0]);
    BubbleSort(a, n);
}