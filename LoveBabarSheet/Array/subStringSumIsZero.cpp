// Problem - 20th
#include <bits/stdc++.h>
using namespace std;

// Brute force approach 
bool isSubArray(int arr[],int n){
    for(int i=0; i < n; i++){
        int curr_sum =0 ;

        for(int j=0; j < n; j++){
            curr_sum += arr[j];
            if(curr_sum == 0){
                return true;
            }
        }

    }
    return false;
 
}
bool subArraySumIsZero(int arr[],int n){
    
    unordered_set<int>s;
    int pre_sum = 0;
    for(int i=0;i<n;i++){
        pre_sum += arr[i];

        if(pre_sum == 0){
            return true;
        }
        if(s.find(pre_sum) != s.end()){
            return true;
        }
        s.insert(pre_sum);
    }
    return false;
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        cout << endl;
}
int main(){
     int a[5] = {4,2,0,1,6};
     int n = sizeof(a) /sizeof(a[0]);
     printArray(a,n);
     bool x = subArraySumIsZero(a,n);
     if(x == 1){
         cout<<"True"<<endl;
     }
     else{
         cout<<"False"<<endl;
     }
     

}