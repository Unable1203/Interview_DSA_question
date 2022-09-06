#include<bits/stdc++.h>
using namespace std;
/*
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
*/
int main(){
    int arr[6]={13,46,2,52,20,9};

    for(int i=0;i<6;i++){
            for(int j=0;j<6;j++){
                if(arr[j]> arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
    }

    cout<<"Array after sorting: "<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}