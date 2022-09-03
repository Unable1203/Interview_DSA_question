#include<bits/stdc++.h>
using namespace std;
void print1_n(int initial, int last){
    if(initial <= last){
        cout << initial << " ";
        print1_n(initial+1, last);
    }
}

void printn_1(int initial, int last){
    if(last >= initial){
        cout << last << " ";
        printn_1(initial, last-1);
    }
}

int sum1_n(int num){
    int sum = 0;
    if(num == 0){
       return sum;
    }
    else{
        sum = sum1_n(num-1) + num;

    }
    return sum;
}
int fact(int num){
    int fact = 1;
    if(num == 0){
        return fact;
    }
    else{
        fact = fact(num-1)*num;
    }
}
int main(){
    int n=10;
    print1_n(1, n);
    cout << endl;
    printn_1(1, n);
    cout<<endl;
    int x = sum1_n(5);
    cout<<"\n Sum of number from 1 to 5 is :"<<x<<endl;
    //int y = fact(5);
    //cout<<"\n Factorial of 5 is :"<<y<<endl;
    return 0;

}