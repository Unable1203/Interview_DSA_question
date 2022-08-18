#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int> > generate(int numRows) {

        vector<vector<int> > r(numRows);
        for(int i = 0; i < numRows; i++){
            r[i].resize(i+1);
            r[i][0] = r[i][i] = 1;
            for(int j = 1 ; j < i ; j++){
                r[i][j] = r[i-1][j-1] + r[i-1][j];
            }
        }
        return r;
    }

    void printnthRow(int numRows) {
        int prev = 1;
        cout<<prev<<" ";
        for(int i = 1; i <= numRows; i++){
            int curr = prev * (numRows - i + 1) / i;
            cout<<curr<<" ";
            prev = curr;
        }
    }

    //If you want to print 5th row 3rd element 
    int printElements(vector<vector<int> > r, int row, int col){
        int res;
        for(int i= 1 ; i< col ; i++){
            res *= (row-1);
            res /= (row+1);
        }
            
        return res;
    }

};
int main(){
    Solution s;
    vector<vector<int> > num = s.generate(5);

    cout<<"Output solution: "<<endl;
    for(int i = 0;i<num.size();i++){
        for(int j = 0;j<num[i].size();j++){
            cout<<num[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"Printing 3rd row: "<<endl;
    s.printnthRow(3);
    return 0;

    cout<<"Print r=5 and c=3 element : "<<endl;
    int x = s.printElements(num,5,3);
    cout << x;
}