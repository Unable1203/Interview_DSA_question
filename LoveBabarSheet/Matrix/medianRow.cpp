// Problem - 39

#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<vector<int>> matrix, int r, int c, int n, int mid){
        int cnt = 0;
        
        for(int i=0;i<r;i++){
            int j = c - 1;
            if(mid >= matrix[i][j]){
                cnt += j + 1;
            } else {
                while(mid < matrix[i][j]) j--;
                cnt += j + 1;
            }
        }
        
        return cnt >= ((n + 1) / 2);
    }
    
    int median(vector<vector<int>> &matrix, int r, int c){
        int s = INT_MAX, e = INT_MIN;
        
        int n = r * c;
        int ans = 0;
        
        for(int i=0;i<r;i++){
            s = min(s, matrix[i][0]);
            e = max(e, matrix[i][c-1]);
        }
        
        
        while(s <= e){
            int mid = s + (( e - s ) / 2);
            if(isPossible(matrix, r, c, n, mid)){
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        
        
        return ans;
        
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

