#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int BrutemaxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxPro = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n; j++){
                int diff= 0;
                if(prices[j] > prices[i]){
                    diff = prices[j] - prices[i];
                    maxPro = max(maxPro,diff);
                }
            }
        }
        return maxPro;
    }

    int maxProfit(vector<int>& prices){
        int maxPro = 0;
        int n = prices.size();
        int minPrice = INT_MAX;

        for(int i=0;i< n; i++){
            minPrice = min(minPrice, prices[i]);
            maxPro = max(maxPro, prices[i] - minPrice);

        }
        return maxPro;
    }
};

int main(){
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    int x = s.maxProfit(prices);
    cout<<"\n Maximium profit is : "<<x;

    return 0;
}