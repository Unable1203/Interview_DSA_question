//Problem - 12th
#include <bits/stdc++.h>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m){
    int i=n-1, j=0;

    while(i>=0 && j<m){
        if(arr1[i]>arr2[j]){
            swap(arr1[i],arr2[j]);
        }
        i--;
        j++;
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);

}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        cout << endl;
}
int main(){
     int a[4] = {1,3,5,7};
     int b[5] = {0,2,6,8,9};
     int n = sizeof(a) /sizeof(a[0]);
     int m = sizeof(b) /sizeof(b[0]);
     printArray(a,n);
     printArray(b,m);
     merge(a,b,n,m);
     cout<<"Array after merging : "<<endl;
     
     
     

}