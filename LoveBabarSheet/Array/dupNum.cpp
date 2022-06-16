//Problem = 11th
#include <bits/stdc++.h>
using namespace std;

/*
// Using Hashmap approach o(n)
int findDuplicate(int arr[],int n){
    map<int,int> m;
    int duplicate = 0;
    for(int i=0;i<n;i++){
        ++m[arr[i]];
    }
    for(int i=n;i>0;i--){
        if(i.second < 1){
            duplicate = i.first;
            break;
        }
    }
    return duplicate;
}
*/
/*
// Appproach 2 using simple
int findDuplicate(int arr[],int n){
    int ind = 0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i] == arr[i+1]){
            ind = arr[i];
            break;
        }

    }
    return ind;
}
*/

// Optimal approach - O(n) & O(1) - Something like finding the first element in Linked LIst
int findDuplicate(int nums[],int n){
    int slow = nums[0];
    int fast = nums[0];

    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow != fast);

    fast= nums[0];
    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        cout << endl;
}
int main(){
     int a[5] = {1,3,5,8,5};
     int n = sizeof(a) /sizeof(a[0]);
     printArray(a,n);
     int x = findDuplicate(a,n);
     cout<<"THe DUplicate number is : "<<x;
     

}