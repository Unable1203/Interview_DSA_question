#include<iostream>
using namespace std;


//----------- Basic Approach ----------------
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int mem = -1;
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++){
            if(nums[i] == nums[i+1]){
                mem = nums[i];
                break;
            }
        }
        return mem;
    }
};

//----------- Advance Approach --------------------
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low = 1, high = nums.size() - 1, cnt;
        
        while(low <=  high)
        {
            int mid = low + (high - low) / 2;
            cnt = 0;
            // cnt number less than equal to mid
            for(int n : nums)
            {
                if(n <= mid)
                    ++cnt;
            }
            // binary search on left
            if(cnt <= mid)
                low = mid + 1;
            else
            // binary search on right
                high = mid - 1;
            
        }
        return low;
    }

};