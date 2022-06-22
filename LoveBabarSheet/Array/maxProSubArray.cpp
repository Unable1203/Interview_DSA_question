#include <bits/stdc++.h>
using namespace std;

// Brute force approach 
long long maxProduct(int arr[], int n) {
	    // code here
	    long long int maxp = INT_MIN, prod = 1;
	    for(int i=0;i<n;i++){
	        prod *= arr[i];
	        maxp = max(maxp, prod);
	        if(prod == 0){
	            prod = 1;
	        }
	    }
	    
	    prod = 1;
	    for(int i=n-1;i>=0;i--){
	        prod *= arr[i];
	        maxp = max(maxp, prod);
	        if(prod == 0){
	            prod = 1;
	        }
	    }
	    
	    return maxp;
	}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        cout << endl;
}

int main(){
     int a[] = {2,3,4,5,-1,0};
     int n = sizeof(a) /sizeof(a[0]);
     printArray(a,n);
     int x = maxProduct(a,n);
     cout<<x<<endl;
     

}