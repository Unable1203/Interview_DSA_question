//Problem - 38

#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i  = 0; i<matrix.size(); ++i)
        {
            for(int j = 0; j<matrix[0].size(); ++j)
            {
				
                if(matrix[i][j] == target)
                    return true;
            }
        }
        return false; 
}

// Optimal one =using binary searchMatrix
bool searchMatrix2(vector<vector<int> >& matrix , int target){
     int rows = matrix.size();
     int cols = matrix[0].size();
     int row=0;
     int col = cols - 1;

     while( row < rows && col > cols){
         int curr = matrix[row][col];
         if(curr == target) return true;
         if(target > curr) row++;
         else col--;
     }
     return false;
}
int main()
{
    vector<vector<int> > a{ { 1, 2, 3, 4 },
                            { 5, 6, 7, 8 },
                            { 9, 10, 11, 12 },
                            { 13, 14, 15, 16 } };
  
    bool x = searchMatrix2(a,3);
    if(x == 1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}