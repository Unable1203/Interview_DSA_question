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
int main(){
    char arr[] = "abc";
    int x = PalindromeString1(arr,4);
    cout<<x<<" ";
    return 0;
}