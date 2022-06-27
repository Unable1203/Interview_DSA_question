//Problem - 30th
#include <bits/stdc++.h>
using namespace std;

int Solution(int arr[],int n,int x){
    int sum=0;
    int count=INT_MAX,j=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        while(sum>x)
        {
            count=min(count,i-j+1);
            sum-=arr[j++];
                
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
    int a1[] = {1,4,45,6,0,19};
    int n = sizeof(a1) / sizeof(a1[0]);
   
    cout<<"Array is : ";
    printArray(a1,n);
    int x1 = Solution(a1,n,51);
    cout<<x1<<endl;
   
    return 0;
}