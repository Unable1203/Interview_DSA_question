// Problem - 39

#include <bits/stdc++.h>
using namespace std;

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

