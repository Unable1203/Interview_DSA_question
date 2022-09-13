#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]= {0,1,2,3,4,5,6,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    /*
    // O(nlogn) and O(1) space
    sort(arr,arr+n);
    cout<<arr[n-1]<<endl;
    */

    /*
    // good approach O(n) and O(1) space
    int max = arr[0];
    for(int i=1; i< n; i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    cout<<max<<endl;
    */

    // O(n) and O(1) space
    int max= arr[0];
    int secMax= arr[0];
    for(int i=1; i< n; i++){
        if(arr[i]>max){
            secMax= max;
            max= arr[i];
        }
        else if(arr[i]>secMax){
            secMax= arr[i];
        }
    }
    cout<<secMax<<endl;
    return 0;
}