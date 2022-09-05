#include<bits/stdc++.h>
using namespace std;
/*
int main(){
    int arr[]= {10,5,10,15,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        vector<bool> visited(n,false);
        if(visited[i] == true){
            continue;
        }

        int count = 1;
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }
        cout<<arr[i]<<" "<<count<<endl;
    }
    return 0;
}
*/
int main(){
    int arr[]= {10,5,10,15,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(auto x: mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}