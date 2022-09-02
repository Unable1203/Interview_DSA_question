#include<bits/stdc++.h>
using namespace std;
int count_digits(int n){
    string x = to_string(n);
    return x.length();
}

int main(){
    int n =12;
    cout<<"String of :"<<(to_string(n)).length()<<endl;
    cout<<"The number of digits in "<<n<<" is "<<count_digits(n)<<endl;
    return 0;
}