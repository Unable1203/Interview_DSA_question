#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n= sizeof(arr)/sizeof(arr[0]);
    if(n<3){
        cout<<"No second largest element";
        return 0;
    }
   // ------Method 1: Using Sorting-------
    sort(arr,arr+n);
    cout<<"Second Smallest element : "<<arr[1]<<endl;
    cout<<"Second Largest element : "<<arr[n-2]<<endl;
    // ------Method 2: Using Min and Max-------
    int secMax = arr[1];
    int max = arr[0];
    for(int i=1; i < n; i++){
        if(arr[i] > max){
            secMax = max;
            max = arr[i];
        }
        else if(arr[i] > secMax && arr[i] != max){
            secMax = arr[i];
        }
        else{
            secMax = -1;
        }

    }
    cout<<"Second Largest element : "<<secMax<<endl;
    return 0;
   
}