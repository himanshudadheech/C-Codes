#include <bits/stdc++.h>
using namespace std;
void rotR(int a[], int n, int k)
{
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[(i + k) % n] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}
void rotL(int a[], int n, int k)
{
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cout << a[(i + k) % n] << " ";
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int k = 2;
    cout << "right " << endl;
    rotR(a, n, k);
    cout << "left " << endl;
    rotL(a, n, k);
}