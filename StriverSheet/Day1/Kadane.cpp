#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int bruteForceKadane(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        for(int i= 0; i < n; i++){
            for(int j=0; j<n;i++){
                int sum = 0;
                for(int k=i; k<=j; k++){
                    sum += nums[k];
                    maxi = max(maxi,sum);
                }

            }
        }
        return maxi;
    }

    int optimalKadane(vector<int>& nums){
        int n = nums.size();
        int maxi = 0;
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=0; j<n; j++){
                sum += nums[j];
                maxi = max(maxi,sum);
            }
        }
        return maxi;
    }
    
    int maxSubArray(vector<int>& nums) {
        int sum =0;
        int maxi = nums[0];
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            maxi = max(maxi,sum);
            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;
        
    }
    
};
int main(){
    Solution s;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int x = s.maxSubArray(nums);
    cout<<"Largest Sum is: "<<x;
    return 0;
}
