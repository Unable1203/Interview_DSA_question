#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[5]={5,4,3,2,1};
    for(int i=0; i<5; i++){
        int min= i;
        for(int j=i+1;j<5; j++){
           if(array[j]<array[min]){
            min = j;
           }
        }
        swap(array[min],array[i]);
    }
    cout<<"array after sorting: "<<endl;
    for(int i=0; i<5; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}