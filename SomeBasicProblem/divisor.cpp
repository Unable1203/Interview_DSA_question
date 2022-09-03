#include <bits/stdc++.h>
using namespace std;
//brute force
int main(){
    int n = 3;
    for(int i = 0; i <= n; i++){
        if(n % i == 0){
            cout << i <<" ";
        }
    }
    return 0;
}