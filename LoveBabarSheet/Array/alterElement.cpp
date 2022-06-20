// Problem - 19th 
#include <bits/stdc++.h>
using namespace std;

void bruteForce(int arr[],int n){
    int pos_arr[n/2];
    int neg_arr[n/2];

    for(int i = 0; i < n;i++){
        if(arr[i] < 0){
            pos_arr[i] = arr[i];
        }
        else{
            neg_arr[i] = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        //put negative number first then positive number
    }
}

void rightrotate(int arr[], int n, int outofplace, int cur)
{
    char tmp = arr[cur];
    for (int i = cur; i > outofplace; i--)
        arr[i] = arr[i - 1];
    arr[outofplace] = tmp;
}
 
void rearrange(int arr[], int n)
{
    int outofplace = -1;
 
    for (int index = 0; index < n; index++)
    {
        if (outofplace >= 0)
        {
            if (((arr[index] >= 0) && (arr[outofplace] < 0))
                || ((arr[index] < 0)
                    && (arr[outofplace] >= 0)))
            {
                rightrotate(arr, n, outofplace, index);
                if (index - outofplace >= 2)
                    outofplace = outofplace + 2;
                else
                    outofplace = -1;
            }
        }

        if (outofplace == -1) {
            if (((arr[index] >= 0) && (!(index & 0x01)))
                || ((arr[index] < 0) && (index & 0x01))) {
                outofplace = index;
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
int main(){
    int arr[] = {1,-2,-3,5,7,1};
	int n = sizeof(arr) / sizeof(arr[0]);
    bruteForce(arr,n);

    cout << "Given array is \n";
    printArray(arr, n);
 
    rearrange(arr, n);
 
    cout << "Rearranged array is \n";
    printArray(arr, n);
    return 0;
}