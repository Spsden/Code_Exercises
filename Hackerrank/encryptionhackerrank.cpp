#include <bits/stdc++.h>
using namespace std;



int main()
{
    string s ;
    cin>>s;

    int length = s.length();
    int numspace= count(s.begin(),s.end(),' ');
    remove(s.begin(),s.end(),' ');
    s.resize(length-numspace);

    //cout<<s;

    int newlength = s.length();

    int rootoflen = sqrt(newlength);
    int rootplusone = rootoflen+1 ;
    //cout<<rootoflen;

    if(rootoflen*rootoflen != newlength)
    {
        rootoflen++;
    }
    

    

    string arr = "";
    // vector<char> arr;

    for (int i = 0; i < rootoflen; i++)
    {
        for (int j = i; j < newlength; j= j+ rootoflen)
        {
            arr += s[j];
        }
         arr+=" ";        
    }

    cout<<arr;

 
    
    


    


}