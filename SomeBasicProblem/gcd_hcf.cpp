#include<bits/stdc++.h>
using namespace std;
//BruteForceMethod
/*
int mac_2(int n,int m){
    if(n>m){
        return n;
    }
    else{
        return m;
    }
}
int main(){
    int n1=12,n2=36;
    int gcd =0;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            int max = i;
            gcd= mac_2(gcd,i);
        }
    }

    cout<<"GCD of 3 and 6 is :"<<gcd<<endl;
    return 0;
}
*/
//Euclidean Algorithm
int main(){
    int n1=12,n2=36;
    int gcd =0;
    if(n2 ==0 ){
        gcd = n1;
    }
    else{
        gcd(n,a%b); //Recursive algorithm
    }
    cout<<"GCD of 3 and 6 is :"<<gcd<<endl;
    return 0;
}
