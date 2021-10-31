#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
int main() {
  
 int n = 10;

 int places = pow(n,2) - pow(n-1,2);
 int spaces = (places/2) + 1;

 cout<<places;
 cout<<"\n"<<spaces;
 cout<<"\n\n\n";


  for (int i = 1; i <= n; i++)
  {

     for (int j = spaces; j > i ; j--)
          {
              cout<<" ";
          }

          for (int k = 0; k < i+(i-1); k++)
          {
              cout<<"*";
          }
        cout<<endl;
          
    }


  for (int i = n-1; i >= 1; i--)
  {

     for (int j = spaces; j > i ; j--)
          {
              cout<<" ";
          }

          for (int k = 0; k < i+(i-1); k++)
          {
              cout<<"*";
          }
        cout<<endl;
          
    }
  
  
}