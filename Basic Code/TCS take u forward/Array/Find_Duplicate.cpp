#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {2, 3, 5, 5, 2, 5,5};
    int l = sizeof(a) / sizeof(a[0]);
    sort(a, a + l);
   
    for (int i = 0; i < l; i++)
    {

        if (a[i] == a[i + 1])
        {
          cout<<a[i]<<endl;
            
            
        }
        
    }
}
