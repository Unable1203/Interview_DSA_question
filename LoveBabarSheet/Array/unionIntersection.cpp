#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <iterator>
using namespace std;

/*
// It takes so may swaps as well as memory space 
void union1(int a[],int n,int b[],int m,int r){
       int arr_main[r];
       int i1 = 0,j = 0;
       for(int i=0;i<r;i++){

           if(a[i1] < b[j]){
               arr_main[i] = a[i1];
               i++;
           }
           else if(a[i1] > b[j]){
               arr_main[i] = b[j];
               j++;
           }
           else{
               arr_main[i] = b[j];
               j++;
               i1++;
           }

           if(i1 < m){
               arr_main[i] = a[i1];
               i1++;
           }
           if(j < n){
               arr_main[i] = b[j];
               j++;
           }


       }

       for (int i = 0; i < n+m; i++)
       cout << arr_main[i] << " ";
       cout << endl;

}
*/

//THis is optimal one using unordered set
void doUnion(int a[], int n, int b[], int m) {
        
        unordered_set<int> s;
    	    
    	for(int i = 0; i < n; i++)
    	   s.insert(a[i]);

    	for(int i = 0; i < m; i++)
    	    s.insert(b[i]);

        
        for (auto const &i: s) {
            std::cout << i << " ";
        }
    	
    	    
    }


void printArray(int a[], int n)
{
       for (int i = 0; i < n; i++)
       cout << a[i] << " ";
       cout << endl;
}

int main()
{
  int a[] = {1,2,3,4,5};
  int n = sizeof(a) /
                sizeof(a[0]);
  int b[] = {1,2,3};
  int m = sizeof(b) /
                sizeof(b[0]);   

  int r = n+m;  
//  union1(a,n,b,m,r);       
     doUnion(a,n,b,m);           
   
  // Function Call
  
  return 0;
}