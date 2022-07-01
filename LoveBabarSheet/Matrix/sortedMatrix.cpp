// Problem - 42

#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > sortedMatrix(int N, vector<vector<int> > Mat) {
       // code here
       vector<int> v;
           for(int i=0;i<N;i++)
           {
               for(int j=0;j<N;j++)
               {
                   v.push_back(Mat[i][j]);
               }
           }
           sort(v.begin(),v.end());
           int k=0;
           for(int i=0;i<N;i++)
           {
               for(int j=0;j<N;j++)
               {
                   Mat[i][j]=v[k];
                   k++;
               }
           }
       return Mat;
}
int main(){
    vector<vector<int> > x;
    vector<vector<int> > a{{0, 1, 1, 1},
                           {0, 0, 1, 1},
                           {1, 1, 1, 1},
                           {0, 0, 0, 0}};
  
    x = sortedMatrix(4,a);
    for(int i=0;i<4;i++){
        for(int j=0;j< 4; j++){
            cout<<x[i][j]<<" ";
        }
    }
    return 0;
}