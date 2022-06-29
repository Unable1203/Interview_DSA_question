// Problem - 34
#include <bits/stdc++.h>
using namespace std;

int palindrome(int a[],int n){
    for(int i=0;i<n;i++){
        int ans =0;
        int temp = a[i];
        while(temp>0){
            int r = temp %10;
            temp /= 10;
            ans = (ans*10)+r;
        }

        if(ans!= a[i]){
            return 0;
        }
    }
    return 1;
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        cout << endl;
}

int main(){
    int a1[] = {1,2,1};
    int n = sizeof(a1) / sizeof(a1[0]);
   
    cout<<"\n Earlier Array is : ";
    printArray(a1,n);
    int x = palindrome(a1,n);
    cout<<"\n Array returns (1 means palindrome): "<< x;
    
    return 0;
}