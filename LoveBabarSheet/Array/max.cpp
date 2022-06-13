// DSA Sheet problem - 3
#include <bits/stdc++.h>
using namespace std;

/* 
first approach is take the array 
sort it then print the value according to 'K'
*/ 

void kthSmallestSolution1(int arr,int n,int k){
    sort(arr,arr+n);
    
}

/* function to print an array */
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
   cout << endl;
}


/* Driver function to test above functions */
int main()
{
    int arr[] = {3, 2, 1, 4, 6, 5};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    kthSmallestSolution1(arr,0,n,k);
    printArray(arr,n);
    return 0;
}
