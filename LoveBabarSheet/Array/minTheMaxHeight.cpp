//Problem -9th 
#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k){
    sort(arr,arr+n);
    int ans = arr[n-1] + arr[0];
    int smallest = arr[0]+k;
    int largest = arr[n-1]-k;
    int mi,ma;

    for(int i=0;i< n-1; i++){
        mi = min(smallest,arr[i+1]-k);
        ma = max(largest,arr[i]+k);
        if(mi < 0) continue;
        ans = min(min(ans,ma),mi);
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
     int a[5] = {3,9,16,12,20};
     int n = sizeof(a) /sizeof(a[0]);
     printArray(a,n);
     int x = getMinDiff(a,n,3);
     cout<<"THe minimum height difference of array : "<<x;
     

}
