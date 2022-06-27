//Problem - 27th
#include <bits/stdc++.h>
using namespace std;
// Brute force O(n3) and O(1)
//By using three loops 1,j and k

//Optimal one with 0(n2) and O(1)
bool tripletSum(int arr[],int n,int x){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        int left = i+1;
        int right = n-1;
        int first = arr[i];
        while(left < right){
            if(first + arr[left] + arr[right] == x){
                return true;
                left++;
                right--;
            }
            else if(first + arr[left] + arr[right] < x){
                left++;
            }
            else{
                right--;
            }
        }
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
    int a1[] = {1,4,45,6,10,8};
    int n = sizeof(a1) / sizeof(a1[0]);
    int x = 13;
    cout<<"Array is : ";
    printArray(a1,n);
    bool x1 = tripletSum(a1,n,x);
    if( x1 == true ){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    
    return 0;
}