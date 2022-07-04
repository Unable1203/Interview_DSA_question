// Problem - 43
#include <bits/stdc++.h>
using namespace std;
//BruteForceMethod = two pointer approach
int PalindromeString1(char str[],int n){
    int i=0;
    int j= n-1;
    while(i<j){
        if(str[i] == str[j]){
            i++;
            j--;
        }
        else{
            return 0;
            break;
        }
    }
    return 1;
}
// Optimal One
int main(){
    char arr[] = "abc";
    int x = isPalindrome(arr,3);
    cout<<x<<" ";
    return 0;
}