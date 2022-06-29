// Problem - 35
#include <bits/stdc++.h>
using namespace std;
int MedianArr(int arr[],int n){
   int median = arr[0];
   sort(arr,arr+n) ;
   if(n%2 == 0){
       median = (arr[n/2] + arr[(n/2)-1])/2;
   }
   else{
       median = arr[n/2];
   }
   return median;
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        cout << endl;
}

int main(){
    int a1[] ={56,67,30,79};
    int n = sizeof(a1) / sizeof(a1[0]);
   
    cout<<"\n Array is : ";
    printArray(a1,n);
    int x = MedianArr(a1,n);
    cout<<"\n Median of Array is : "<< x;
    
    return 0;
}