#include <bits/stdc++.h>
using namespace std;
int main(){
    int n =123
    int reverse = 0;
    while(n!=0){
        int r = n%10;
        reverse = reverse*10 + r;
        n = n/10;
    }
    cout<<"The reverse number is: "<<reverse<<endl;
    /*
    if(reverse == n){
        cout<<"\n\t Number is Palindrome";
    }
    else{
        cout<<"\n\t Number is not Palindrome";
    }
    */
    return 0;
}