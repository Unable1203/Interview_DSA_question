// Problem - 40th

#include <bits/stdc++.h>
using namespace std;

int MaxNumOne(vector<vector<int>> matrix,int n,int m){
       int row = -1;
       int max = 0;
       
       for(int i=0;i<n;i++)
       {
           int total = 0;
           for(int j=0;j<m;j++)
           {
               if(matrix[i][j]==1)
               {
                   total++;
               }
           }
           
           if(max<total)
           {
               max=total;
               row = i;
           }
       }
       return row;
}

int main()
{
    vector<vector<int> > a{{0, 1, 1, 1},
                           {0, 0, 1, 1},
                           {1, 1, 1, 1},
                           {0, 0, 0, 0}};
  
    int x = MaxNumOne(a,4,4);
    cout<<x;
    return 0;
}