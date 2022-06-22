// Problem - 23rd
#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveArray(int arr[],int n){
     int ans = arr[0];
     int ma = ans;
     int mi = ans;
     for(int i=0;i<n; i++){
         if(nums[i] < 0){
             swap(ma,mi);
         }
         ma = max(arr[i],ma*arr[i]);
         mi = min(arr[i],mi*arr[i]);
         ans = max(arr,ma);
     }
     return ans;
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        cout << endl;
}

int main(){
     int a[] = {1,9,3,10,4,20,2};
     int n = sizeof(a) /sizeof(a[0]);
     printArray(a,n);
     int x = maxConsecutiveArray(a,n);
     cout<<x<<endl;
     
}