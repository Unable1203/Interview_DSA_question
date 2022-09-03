#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 170;
    int copy = n;
    int arm = 0;
    while(n!=0){
        int r = n % 10;
        arm = arm + r*r*r;
        n = n/10;
    }
    if(copy == arm){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not Armstrong Number"<<endl;
    }
    return 0;
}