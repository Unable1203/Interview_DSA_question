#include<bits/stdc++.h>
using namespace std;

  class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0,m =0, h = nums.size() -1;
        while(m<=h){
            if(nums[m] == 1){
                m++;
            }
            
            else if(nums[m] == 0){
                swap(nums[m],nums[l]);
                m++;
                l++;
                
                
            }
            else if(nums[m] == 2){
                swap(nums[m],nums[h]);
                h--;
            
            
            }
        }
        
        
        for(int i = 0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
    }
};
int main(){
    Solution s;
    vector<int> nums = {0,1,0,1,2,1,2,0};
    s.sortColors(nums);
    return 0;
}