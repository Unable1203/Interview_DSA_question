//Problem -7th 
#include <bits/stdc++.h>
using namespace std;

/*
template<typename T>
void printElements(T &v)
{
    cout << "[ ";
    for (const auto &item : v) {
        cout << item << ", ";
    }
    cout << "\b\b ]" << endl;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printElements(vec);
    rotate(vec.begin(), vec.begin() + 1, vec.end());
    printElements(vec);
   
    exit(EXIT_SUCCESS);
}
*/

//Another optimal approach 
void Reverse(int arr[],int i,int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
void rotate(int a[],int n,int k = 1){
  Reverse(a,0,n-k-1);
  Reverse(a,n-k,n-1);
  Reverse(a,0,n-1);

}
void printArray(int a[], int n)
{
       for (int i = 0; i < n; i++)
       cout << a[i] << " ";
       cout << endl;
}
int main(){
    
  int a[] = {1,2,3,4,5};
  int n = sizeof(a) /sizeof(a[0]);
  rotate(a,n,1);
  printArray(a,n);


  return 0;


}
/*
        //This is also good approach
        k = k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
*/