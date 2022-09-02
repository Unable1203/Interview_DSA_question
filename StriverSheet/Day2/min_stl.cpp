#include<bits/stdc++.h>
using namespace std;
void min_element(vector<int> num){
    cout<<"\n The minimum element is :"<<*min_element(num.begin(),num.end())<<endl;
}
void max_element(vector<int> num){
    cout<<"\n The maximum element is :"<<*max_element(num.begin(),num.end())<<endl;
}
int main(){
    vector<int>v {4,2,5,9,1};
    cout<<"The elements in the vector are: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    min_element(v);
    max_element(v);
    return 0;
}