// Problem - 26th
#include <bits/stdc++.h>
using namespace std;
//BruteForceMethod = O(n2) and space complexity = O(1)
bool arrSubarray(int a1[],int n,int a2[],int m){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a1[i]== a2[j]){
                count++;
            }
        }
    }

    if(count == n || count == m){
        return true;
    }

    return false;

}
bool isSubset(int a1[],int n, int a2[],int m){
   unordered_set<int> elements;
   for(int i=0; i<n; i++)
       elements.insert(a1[i]);
   for(int i=0; i<m; i++)
       if(elements.find(a2[i]) == elements.end())
           return false;
   return true;
}
// Optimal Approach

int main(){
    int a1[] = {10,5,2,23,19};
    int n = sizeof(a1) / sizeof(a1[0]);
      
    int a2[] = {19,5,3};
    int m = sizeof(a2) / sizeof(a2[0]);
      
   // bool x = arrSubarray(a1, n,a2,m);
    bool x = isSubset(a1,n,a2,m);
    if(x == 1){
        cout << "True";
    }
    if(x == 0){
        cout<< "False";
    }
    return 0;
}