#include<iostream>
using namespace std;
int main(){
    int n =123;
    int reverse = 0;
    while(n!=0){
        int r = n %10;
        reverse = reverse*10 + r;
        n = n/10;
    }
    cout<<"The reverse number is: "<<reverse<<endl;
    return 0;
}