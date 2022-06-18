//Problem - 16th
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(int prices[],int n) {
        int min_price = INT_MAX;
        int max_profit = 0;
        
        for(int i = 0; i < n; i++){
            min_price = min(prices[i], min_price);  
            max_profit = max(prices[i] - min_price, max_profit);  
        }
        return max_profit;
        
    }
};
int main(){
    int arr[] = { 7,1,5,3,6,4};
	int n = sizeof(arr) / sizeof(arr[0]);
    Solution s;
	int ans = s.maxProfit(arr, n);
	cout << " Maximum Profit are " << ans;
	return 0;

}