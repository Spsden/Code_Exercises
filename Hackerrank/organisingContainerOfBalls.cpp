#include <bits/stdc++.h>
using namespace std;



int main()
{
    
    int q;
    
    cin>>q;

   vector<int>rowsums;
   vector<int>columnsums;
   vector<string>results;


    while(q>0)
    {
        int x;
        cin>>x;
        int arr[x][x];

        for (int i = 0; i < x; i++)
        {
           
            for (int j = 0; j < x; j++)
            {
                cin>>arr[i][j];

            }
        
        }

         for (int i = 0; i < x; i++)
        {
            int sum_rows =0;
            int sum_column =0;
           
            for (int j = 0; j < x; j++)
            {
                cout<<arr[i][j]<<" "<<arr[j][i]<<"  ";

                
            
                
                sum_rows += arr[i][j];
                sum_column += arr[j][i];

            }
            cout<<"rowsumnow"<<sum_rows<<" "<<endl;
            cout<<"columnsumnow"<<sum_column<<" "<<endl;
            rowsums.push_back(sum_rows);
            columnsums.push_back(sum_column);
            cout<<endl;
        
        }

        //  int biggestcolumnsum = *max_element(columnsums.begin(),columnsums.end());
        //  int biggestrowsum = *max_element(rowsums.begin(),rowsums.end());

    // cout<<biggestcolumnsum<<endl;
    // cout<<biggestrowsum;

    sort(rowsums.begin(),rowsums.end());
    sort(columnsums.begin(),columnsums.end());
  for (int i = 0; i < x; i++)
  {

       if(rowsums[i] =! columnsums[i])
    {
       cout<<"Impossible";
       break;

    }
    else
    {
        cout<<"Possible";
    }
        q--;
    }

 
}
   for (int i = 0; i < results.size(); i++)
    {
       cout<<results[i]<<endl;
    }

}