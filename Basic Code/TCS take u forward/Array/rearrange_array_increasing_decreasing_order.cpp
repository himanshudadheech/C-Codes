// Input: 8 7 1 6 5 9
// Output: 1 5 6 9 8 7

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {4,2,8,6,15,5,9,20};
    int l = sizeof(a) / sizeof(a[0]);

    sort(a, a + l);
   
        
        for( int i=0;i<l/2;i++){
        	cout<<a[i];
		}
		
	   
        for( int i=l-1;i>=l/2;i--){
        	cout<<a[i];
	
		}
    
}
