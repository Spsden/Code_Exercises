#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
  int row,col,rot;
  scanf("%d%d%d", &row,&col,&rot);
  //cin>>row>>col>>rot;
  // col = 4;
  // row = 5;

  int arr[row][col];

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d" , &arr[i][j]);
      //cin>>arr[i][j];
    }
    
  }

  int numoflayers = min(row,col)/2;
  int numoflayers2 = numoflayers;

  vector<vector<int>> v1(numoflayers);

  int x = 0;
  int y = 0;
  int vindex = 0;
  int coll2 = col;
  int row2 = row;
  int righttoleft = 0;
  int bottomtotop = 0;




  while (numoflayers > 0)
  {

     while (y < coll2)
  {
    //cout<<arr[x][y++];
    //int a = arr[x][y++];
    v1[vindex].push_back(arr[x][y++]);
  }
  y--;
  x++;

  while (x < row2)
  {
    //cout<<arr[x++][y];
    //int b = arr[x++][y];
    v1[vindex].push_back(arr[x++][y]);
  }
  x--;
  y--;

   while (y >= righttoleft)
   {
     //cout<<arr[x][y--];
     //int c = arr[x][y--];
     v1[vindex].push_back(arr[x][y--]);

   }
   y++;
   x--;
   //cout<<"x val "<<x;

    while (x >= bottomtotop+1)
    {
      //cout<<arr[x--][y];
      //int d = arr[x--][y];
      v1[vindex].push_back(arr[x--][y]);
    }
    
    

    // cout<<"x value now is"<<x;
    // cout<<endl;
    // cout<<"y value now is "<<y;
    // cout<<endl;

    x++; y++;
    coll2--; row2--;
    righttoleft++; bottomtotop++;
    vindex++;

    numoflayers--;

  }

  // for (int i = 0; i < v1.size(); i++)
  // {
  //   for (int j = 0; j < v1[i].size(); j++)
  //   {
  //     cout<<v1[i][j]<<" ";
  //   }
  //   cout<<endl;
    
  // }

while (rot > 0)
{
  
    for (int i = 0; i < v1.size(); i++)
  {
    auto front = v1[i].front();
     v1[i].erase(v1[i].begin());
     v1[i].insert(v1[i].end(), front);
  } 
  rot--;
}


  //   for (int i = 0; i < v1.size(); i++)
  // {
  //   for (int j = 0; j < v1[i].size(); j++)
  //   {
  //     cout<<v1[i][j]<<" ";
  //   }
  //   cout<<endl;
    
  // }


  
  






//vector<vector<int>> ansarray;



int ansarray[row][col];
// for (int i = 0; i < row; i++)
// {
//   for (int j = 0; j < col; j++)
//   {
//     ansarray[i][j] = 0;
//   }
  
// }

// for (int i = 0; i < row; i++)
// {
//   for (int j = 0; j < col; j++)
//   {
//     cout<<ansarray[i][j]<<" ";
//   }
//   cout<<endl;
  
// }



  int x2 = 0;
  int y2 = 0;
  
  int coll3 = col;
  int row3 = row;
  int righttoleft2 = 0;
  int bottomtotop2 = 0;
  int vindex2 = 0;

 //


   while (numoflayers2 > 0)
    {
       int semians = 0;

              while (y2 < coll3)
          {
            ansarray[x2][y2] = v1[vindex2][semians]  ;
            y2++; semians++;
          }
          y2--;
          semians--;

          while (x2 < row3)
          {
            ansarray[x2][y2] = v1[vindex2][semians];
            x2++;semians++;
          }
          x2--;
          semians--;

          //cout<<"y size "<<y<<" ";

          while (y2 >= righttoleft2)
          {
            ansarray[x2][y2] = v1[vindex2][semians];
            y2--;semians++;
          }
          semians--;
          //x2--;
          y2++;
          //cout<<"y2 value is "<<y2<<" ";

          while (x2 > bottomtotop2)
          {
            ansarray[x2][y2] = v1[vindex2][semians];
            x2--;semians++;

          }

          // cout<<"x value is "<<x2<<endl;
          // cout<<"y2 value is "<<y2<<endl;
          // cout<<"semians value is "<<semians<<endl;


          vindex2++;

          x2++;y2++;
          coll3--;row3--;
          righttoleft2++;bottomtotop2++;
         

          numoflayers2--;


    
}
  













 
for (int i = 0; i < row; i++)
 {
  for (int j = 0; j < col; j++)
  {
    printf("%d ",ansarray[i][j]);
    //cout<<ansarray[i][j]<<" ";
  }
  cout<<endl;
 }
  
 

  
  
    

    
    
  }
  
   
