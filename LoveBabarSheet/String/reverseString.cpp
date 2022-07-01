// Problem - 41

#include <bits/stdc++.h>
using namespace std;
void reverseString(vector<char> s, int n) {
        int j=n-1;
        for(int i=0;i<=n/2;i++){
            if(i<j){
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                j--;
            }
            else{
                break;
            }
        }
        
        
}

void printArray(vector<char> a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        cout << endl;
}

int main(){
    vector<string> ar1[] = {"h","e","l","l","o"}; 
    int n1 = sizeof(ar1)/sizeof(ar1[0]); 
    cout<<"Earlier Array is : ";
    printArray(ar1,n1);
    cout<<"Reverse Array is : ";
    reverseString(ar1,n1);
    return 0;
}