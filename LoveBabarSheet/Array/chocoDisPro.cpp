//Problem -29th
#include <bits/stdc++.h>
using namespace std;

long long findMinDiff(long long a[], long long n, long long m){
    
    if(m>n)
       return -1;
    sort(a,a+n);
    long long diff=a[m-1]-a[0];
    for(long long i=1; i<n-m+1; i++){
        diff=min(a[m+i-1]-a[i],diff);
    }
     return diff;
} 
void printArray(long long a[], long long n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        cout << endl;
}

int main(){
    long long a1[] = {3,0,1,2,5};
    long long n = sizeof(a1) / sizeof(a1[0]);
   
    cout<<"Array is : ";
    printArray(a1,n);
    long long x1 = findMinDiff(a1,n,5);
    cout<<x1<<endl;
   
    return 0;
}