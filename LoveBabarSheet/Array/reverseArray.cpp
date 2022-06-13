#include<bits/stdc++.h>
using namespace std;
//----- Not optimal One approach = O(n)------
void Solution1(int arr[],int i,int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

}

/*
void reverseString(int s[],int n){
        //create a stack
        stack<int> st;
        //loop through the int, to add all the int elements in stack
        for(int i=0;i<n;i++){
            //create a variable to add the values
            int ch = s[i];
            st.push(ch);
        }
        //empty the original array
        s.fill(0);
        //add the stack elements to the int
        while(!st.empty()){
            int st = st.top();
            //reversed
            s.push_back(ch);
            st.pop();
        }
}
*/

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
   cout << endl;
}
int main(){
    int arr[5] = {0,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    Solution1(arr,0,n-1);
    printArray(arr,n);
    reverseString(arr,n);
    printArray(arr,n);
    return 0;
}