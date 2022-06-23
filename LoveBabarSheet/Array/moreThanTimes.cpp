// Problem - 24th
#include <bits/stdc++.h>
using namespace std;

//Brute Force Method
void BruteForceMethod(int arr[], int n, int k){
    int count = 0;
    int x = n/k;
    int sol_arr[n];
    for(int i=0; i< n; i++){
         for(int j=i; j<n; j++){
             if(arr[i] == arr[j]){
                 count++;
             }
         }
         if(count > x){
            sol_arr[i] = arr[i];
         }
    }
    for(int i=0; i< n; i++){
        cout<<sol_arr[i]<<" ";
    }
}

//Optimal approach
void morethanNbyK(int arr[], int n, int k){
    int x = n/k;
    unordered_map<int,int> freq;

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    for(auto i: freq){
        if(i.second > x){
            cout<<i.first<<" "<<endl;
        }
    }
}
int main()
{
    int arr[] = { 1, 1, 2, 2, 3, 5, 
                  4, 2, 2, 3, 1, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
      
    morethanNbyK(arr, n, k);
  
    return 0;
}

