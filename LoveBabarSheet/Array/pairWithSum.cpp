//Problem = 17th

#include <bits/stdc++.h>
using namespace std;
int SumCount(int arr[],int n,int k){
    int count =0,j=0;
    for(int i=0;i<n;i++){
        for(int j=j-i+1;j<n;i++){
            if(arr[i] + arr[j] == k){
                count++;
            }
        }
    }
    return count;
}
int optimalOne(int arr[], int n, int k){
    unordered_map<int,int> m;

    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int count = 0;

    for(int i=0;i<n;i++){
        count += m[k-arr[i]];

        if(k-arr[i] == arr[i]){
            count--;
        }

    }
    return count;
}
int main(){
    int arr[] = {1,5,7,1};
	int n = sizeof(arr) / sizeof(arr[0]);
    int sum = SumCount(arr,n,6);
    cout<<"Count is :"<<sum<<endl;

    int sum2 = optimalOne(arr,n,6);
    cout<<"Count is :"<<sum2<<endl;
    return 0;

}