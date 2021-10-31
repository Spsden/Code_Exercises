#include <bits/stdc++.h>
using namespace std;
  
int isPrime(int n)
{
    
    if (n <= 1 && n > 100000)
    {cout<<"Invalid"<<endl;}
      
  
   
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
  
    return 1;
}
  

int main()
{
    int t;
    cin>>t;

    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    

    for (int i = 0; i < t; i++)
    {
        if(arr[i] > 100000)
        {
            cout<<"Invalid"<<endl;
            continue;
                  }

        else if(isPrime(arr[i]) == 1)
        {
            cout<<"Prime"<<endl;

        }
        else
        {
            cout<<"Composite"<<endl;
        }
        
    
     
        
       


    }
    
}