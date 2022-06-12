// Iterative C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;
 
/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}    
/* Utility function to print an array */
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
 
    // To print original array
    printArray(arr, n);
     
    // Function calling
    rvereseArray(arr, 0, n-1);
     
    cout << "Reversed array is" << endl;
     
    // To print the Reversed array
    printArray(arr, n);
     
    return 0;
}
/*
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int result = 0;
        unordered_set<int> hset;
        for (int i = 0, j = 0, win = 0; j < nums.size(); j++) {
            while (hset.find(nums[j]) != hset.end()) {
                hset.erase(nums[i]);
                win -= nums[i];
                i++;
            }
            hset.insert(nums[j]);
            win += nums[j];
            result = max(result, win);
        }
        return result;
    }
};

*/