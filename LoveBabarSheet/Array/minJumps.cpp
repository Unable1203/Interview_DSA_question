//Problem = 10
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public :
      int minJumps(int arr[],int n){

          if(n==0)
            return 0;
        
          if(arr[0] == 0) return -1;

          int maxReach = arr[0];
          int step = arr[0];
          int jump = 1;

          int i=1;
          for(int i=1; i<n ;i++){
              if( i== n-1){
                  return jump;
              }

              maxReach = max(maxReach,i+arr[i]);
              step--;
              if(step == 0){
                  jump++;
                  if(i >= maxReach) return -1;
                  step = maxReach - i;
              }
          }
          return -1;
      }

      void printArray(int a[], int n)
      {
           for (int i = 0; i < n; i++)
           cout << a[i] << " ";
           cout << endl;
      }
};

int main(){
     int a[11] = {1,3,5,8,9,2,6,7,6,8,9};
     int n = sizeof(a) /sizeof(a[0]);
     Solution s;
     s.printArray(a,n);
     int x = s.minJumps(a,n);
     cout<<"THe minimum Number of jumps: "<<x;
     

}