#include <bits/stdc++.h>
using namespace std;
/*
SPACE = 0(1)
TIME = O(N)
*/
class Solution
{
    public:
    
    void swap(int &x, int &y){
        int temp = x;
        x = y;
        y = temp;
    }
    
    void sort012(int a[], int n)
    {
        // code here 
        int l = 0, h = n-1, m = 0;
        while (m <= h){
            if(a[m] == 0){
                swap(a[m], a[l]);
                l++;
                m++;
                
            }else if(a[m] == 1){
                m++;
            }
            else{
                swap(a[m], a[h]);
                h--;
            }
        }
    }

    void printArray(int a[], int n)
    {
       for (int i = 0; i < n; i++)
       cout << a[i] << " ";
       cout << endl;
    }
    
};
int main(){
    Solution s;
    int arr[10] = {1,1,0,0,2,0,1,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    s.printArray(arr,n);
    s.sort012(arr,n);
    s.printArray(arr,n);

    return 0;
}