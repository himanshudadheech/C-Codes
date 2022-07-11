#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Heman";
    string b = "iagik";
  
   for (int i =0; i<s.length(); i++)
   {
       if (s.find(b[i]) )
       {
           cout << "yes" << endl;
           
           i++;
       }
       else{
       	cout<<"no";
	   }
      }
}
