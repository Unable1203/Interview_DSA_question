//Problem - 8th (Kadane's Algorithm most important algorithm)

#include <bits/stdc++.h>
using namespace std;

//brute force one is you find all the sub array using two loops which give us time complexity of O(n2)
// Optimal approach for this question - O(n) & O(1)
int maxSubArraySum(int arr[],int n){
    int maxSum = INT_MIN, sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        maxSum = max(maxSum,sum);
        if(sum < 0){
            sum =0;
        }
    }
    return maxSum;
}
int main(){
    int arr[5] = {1,2,3,-2,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = maxSubArraySum(arr,n);
    cout<<"Maximum sum of sumArray using Kadane's Algo is : "<<x<<endl;
}