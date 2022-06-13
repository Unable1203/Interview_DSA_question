// Iterative C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;
 
/*( Approach-1 ) firstly reverse the array then first element is the min and last is the maximum*/
void reverseArray1(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}   
 void reverseArray2(int arr[],int n) //total comparison = 2*(n-2) + 1
 {
     int max = arr[0],min = arr[1];
     if(n == 1){             //comparison = 1
         max = arr[0];
         min = arr[0];
     }
     else{                                      
         if(arr[0] > arr[1] ){
             max = arr[0];
             min = arr[1];
         }
         else{
             max = arr[1];
             min = arr[0];
         }
         for(int i =2;i<n;i++){               //comparison = 2*(n-2)
             if(arr[i] > max){
                 max = arr[i];
             }
             if(arr[i] < min){
                 min = arr[i];
             }

         }
     }

     cout<<" Maximum element is : "<<max<<endl;
     cout<<" Minimum element is : "<<min<<endl;


 }


 void reverseArray3(int arr[],int n) //total comparison = 
 {
     int max = arr[0],min = arr[1];
     int i;
     if(n%2 == 0){             //comparison = 1
         if(arr[0] > arr[1] ){
             max = arr[0];
             min = arr[1];
         }
         else{
             max = arr[1];
             min = arr[0];
         }
         i =2;
     }
     else{ 
         max= arr[0];
         min = arr[0];
         i =1;
         
     }
     while(i>n-1){
             if(arr[i] > arr[i+1]){
                     if(arr[i] >max){
                         max = arr[i];
                     }
                     if(arr[i+1] < min){
                         min = arr[i+1];
                     }
                 }
                 else{
                     if(arr[i+1] >max){
                         max = arr[i+1];
                     }
                     if(arr[i] < min){
                         min = arr[i];
                     }
                 }

        }
     

     cout<<" Maximum element is : "<<max<<endl;
     cout<<" Minimum element is : "<<min<<endl;


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
    int arr[] = {1, 2, 3, 4, 5, 6};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    cout << "Min and max using min comparison using (approach -1)  is" << endl;
    reverseArray1(arr, 0, n-1);
    cout<<" Maximum element is : "<<arr[0]<<endl;
    cout<<" Minimum element is : "<<arr[n-1]<<endl;


    cout << "Min and max using min comparison using (approach -2)  is" << endl;
    reverseArray2(arr,n);

    cout << "Min and max using min comparison using (approach -3)  is" << endl;
    reverseArray3(arr,n);
    

     
    return 0;
}
