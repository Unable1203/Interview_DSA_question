//Problem - 28th
#include <bits/stdc++.h>
using namespace std;

long long trappingWater(int arr[], int n){
       int i=0,j=n-1;
       int left_max=0,right_max=0;
       long long count=0;
       while(i<=j) {
           if(arr[i]<=arr[j]) {
               if(arr[i]>=left_max) {
                   left_max=arr[i];
               }else {
                   count+=left_max-arr[i];
               }
               i++;
           }else {
               if(arr[j]>=right_max) {
                   right_max=arr[j];
               }else {
                   count+=right_max-arr[j];
               }   
               j--;
           }
       }
       return count;
}       
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        cout << endl;
}

int main(){
    int a1[] = {3,0,1,2,5};
    int n = sizeof(a1) / sizeof(a1[0]);
   
    cout<<"Array is : ";
    printArray(a1,n);
    long long x1 = trappingWater(a1,n);
    cout<<x1<<endl;
   
    return 0;
}