#include<bits/stdc++.h>
using namespace std;
void swap_element(int a[], int l, int r){
    if(l >=r) return;
    swap(a[l], a[r]);
    swap_element(l+1, r-1);
}
void printArray(int a[],int l, int r){
    if(l >= r) return;
    cout << a[l] << " ";
    printArray(l+1, r);
}
int main(){
    int arr[] = {1,2,3,4,5};
    printArray(arr, 0, 4);
    swap_element(arr, 0, 4);

    printArray(arr, 0, 4);
    return 0;

}