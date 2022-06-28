// Problem - 31
#include <bits/stdc++.h>
using namespace std;

// Brute force - O(nlogn), O(1)
void threePartitionBrute(int arr[], int n,int a,int b){
    sort(arr,arr+n);
}

// optimal one-dimensional
void threeWayPartition(int arr[],int n,int a, int b)
{
        // code here 
        int start = 0, end = n-1, i = 0;

    	while(i<=end)
    	{
    		if (arr[i] < a){
    			swap(arr[i], arr[start]);
                i++;
                start++;
            }    
    
    		else if (arr[i] > b){
    			swap(arr[i], arr[end]);
                end--;
            }
    		else{
    			i++;
            }    
    	}
        
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        cout << endl;
}

int main(){
    int a1[] = {1,2,3,4,3};
    int n = sizeof(a1) / sizeof(a1[0]);
   
    cout<<"Earlier Array is : ";
    printArray(a1,n);
    threePartitionBrute(a1,n,1,2);
    cout<<"After Array is : ";
    printArray(a1,n);
    return 0;
}
