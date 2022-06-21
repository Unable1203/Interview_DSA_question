// Problem - 20th
#include <bits/stdc++.h>
using namespace std;
bool subArraySumIsZero(int arr[],int n){
    map<int,int> m;
       m[0]++;
       int pref=0;
       for(int i=0; i<n; i++){
           pref+=arr[i];
           if(m[pref]>0)
           return true;
           m[pref]++;
       }
       return false;
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        cout << endl;
}
int main(){
     int a[5] = {4,2,0,1,6};
     int n = sizeof(a) /sizeof(a[0]);
     printArray(a,n);
     bool x = subArraySumIsZero(a,n);
     if(x == 1){
         cout<<"True"<<endl;
     }
     else{
         cout<<"False"<<endl;
     }
     

}