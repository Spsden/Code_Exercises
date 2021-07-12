#include <iostream>
#include <vector>
#include <stdio.h>
#include <math.h>
#include <numeric>

using namespace std;


// int smallestDivisor(int n)
// {
//     int pep = 0;
//     if(n <= 1)
//     {return 1;}
//     // if divisible by 2
//     else if (n % 2 == 0)
//         //return 2;
//        { pep += 2;}
 
//     else if (n % 2 != 0)
//     {
//         for (unsigned long long i = 3; i * i <= n; i++) {
//         if (n % i == 0)
//             //return i;
//            { pep += i;}
//     }

//      //int quotient;
//        int  quotient = n/pep;
    
//     return quotient*smallestDivisor(quotient);
   
// }


unsigned long long smallestDivisor(unsigned long long n)
{
    // if divisible by 2
    if (n % 2 == 0)
        return 2;
 
    // iterate from 3 to sqrt(n)
    for (unsigned long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
 
    return n;
}

unsigned long long quotient(unsigned long long main)
{
    if(main <= 1)
    {return 1;}
    unsigned long long ans = main/smallestDivisor(main);
    return ans+quotient(ans);
    
}

int main()
{
    short n;
    unsigned long long arr[100];
    vector<unsigned long long> v1;
    unsigned long long thend;
    
    scanf("%hu", &n);
    for (int i = 0; i < n; ++i)
      {scanf("%llu", &arr[i]);}

    
    
    
   for (int i = 0; i < n; i++)
   {
       //cout<<arr[i]+quotient(arr[i])-1;
       unsigned long long sum = arr[i]+quotient(arr[i])-1;
       v1.push_back(sum);
   }

   thend = accumulate(v1.begin(), v1.end(), 0LL);
   printf("%llu",thend);

   return 0;
   
   
    

}

