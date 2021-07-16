#include<iostream>
#include <vector>
#include <algorithm>

#include <bits/stdc++.h>
#include <array>

using namespace std;

int main()
{

//   int array[100][3][3];

vector<vector<int>> outer;

vector<int> storeinput;
vector<int>allsums;









  char arr[9] = {'a','b','c','d','e','f', 'g' ,'h','i'};
    for(int a=1;a<10;a++)
    {
       for(int b=1;b<10;b++)
       {
           for(int c=1;c<10;c++)
           {
               int sum = a+b+c;

               for(int d=1;d<10;d++)
               {
                   for(int e=1;e<10;e++)
                   {
                       for(int f=1;f<10;f++)
                       {
                           if(d+e+f != sum)  continue;
                         
                            for(int g=1;g<10;g++)
                            {
                                int sum2 = a+d+g;
                                int sum3 = c+e+g;
                                if(sum != sum2 || sum != sum3) continue;
                            
                                for(int h=1;h<10;h++)
                                {
                                    int sum3 = b+e+h;
                                    if(sum3 != sum)  continue;
                                    
                                    for(int i=1;i<10;i++)
                                    {
                                        int sum4 = g+h+i;
                                        int sum5 = c+f+i;
                                        int sum6 = a+e+i;
                                        
                                        if(sum != sum4 || sum !=sum5 || sum != sum6) continue;
                                        
                                        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<i<<endl;
                                        //cout<<"\n"<<endl;

                                        //vector<int> inner = {'a','b','c','d','e','f', 'g' ,'h','i'};

                                        vector<int> vsub;

                                        vsub.push_back(a);
                                        vsub.push_back(b);
                                        vsub.push_back(c);
                                        vsub.push_back(d);
                                        vsub.push_back(e);
                                        vsub.push_back(f);
                                        vsub.push_back(g);
                                        vsub.push_back(h);
                                        vsub.push_back(i);

                                       set<int> s1(vsub.begin(),vsub.end());
                                       //s1.insert(inner[9]);
                                      
                                   // if(s1.size() == 9)
                                    //   for (auto it = s1.begin(); it != s1.end(); it++)
                                    //   {
                                    //       cout<<*it<<" ";
                                    //   }
                                    //   cout<<endl;
                                       
                                       
                                        if(s1.size() != 9)
                                        {continue;}

                                    outer.push_back(vsub);


                                    
                                       
                                        

                                        

                                        // s1.insert(a);
                                        // s1.insert(b);
                                        // s1.insert(c);
                                        // s1.insert(d);
                                        // s1.insert(e);
                                        // s1.insert(f);
                                        // s1.insert(g);
                                        // s1.insert(h);
                                        // s1.insert(i);



                                        
                                        

                                       
                                        

                                        
                                        // vector<int> vsub;
                                        // vsub.push_back(a);
                                        // vsub.push_back(b);
                                        // vsub.push_back(c);
                                        // vsub.push_back(d);
                                        // vsub.push_back(e);
                                        // vsub.push_back(f);
                                        // vsub.push_back(g);
                                        // vsub.push_back(h);
                                        // vsub.push_back(i);

                                        
                                        // arr[0][0]=a;arr[0][1]=b;arr[0][2]=c;
                                        // arr[1][0]=d;arr[1][1]=e;arr[1][2]=f;
                                        // arr[2][0]=g;arr[2][1]=h;arr[2][2]=i;
                                            
                                        //v1.push_back(vsub);

                                    }
                                    
                                    
                                }
                                
                                
                            }
                           
                           
                       }
                   }
               }
           }
       }
    }


//  for (int i = 0; i < outer.size(); i++)
//  {
//     for (int j = 0; j < 9; j++)
//     {
//         cout<<outer[i][j]<<" ";
//     }
//     cout<<endl;
    
//  }


 int inputarray[3][3];
 for(int i = 0; i<3;i++)
 {
     for (int j = 0; j < 3; j++)
     {
         cin>>inputarray[i][j];
     }
     
 }



for(int i = 0; i<3;i++)
 {
     for (int j = 0; j < 3; j++)
     {
        //  cout<<inputarray[i][j]<<" ";
         storeinput.push_back(inputarray[i][j]);
     }
     
 }

//  cout<<"\n"<<endl;

 for (int i = 0; i < outer.size(); i++)
 {
     
     int sumstore = 0 ;
     for (int j = 0; j < 9; j++)
    {
       sumstore = sumstore +  abs(outer[i][j] - storeinput[j]);
    }
    // cout<<sumstore;
  
    //  cout<<endl;
     allsums.push_back(sumstore);
    
    
 }





//  cout<<"lololo"<<storeinput[8]<<endl;
//  for(auto x : allsums)
//  {
//      cout<<x<<" ";
//  }


 cout<<*min_element(allsums.begin(),allsums.end());

    
}