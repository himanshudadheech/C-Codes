#include <bits/stdc++.h>
using namespace std;
int main(){
   char a[100],b[100];
  cout<<"enter char of string : ";
  cin>>a;
   strcpy(b,a);
   strrev(b);
   if(strcmp(a,b)==0){
    cout<<"yes";
   }
   else{
    cout<<"NO";
   }

}
