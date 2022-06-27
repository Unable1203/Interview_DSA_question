//Problem - 25th
#include <bits/stdc++.h>
using namespace std;
//BruteForceMethod = O(n2)
void BruteForceMethod(int arr[], int n){
    int Profit = 0;
    for(int i=0; i<n;i+=2){
        for(int j=i+1; j<n; j++){
            Profit = max(Profit,arr[j]- arr[i]);
        }

    }
    cout<<Profit<<" ";
}

//Optimal approach
int maxtwobuysell(int arr[],int size) {
    int first_buy = INT_MIN;
      int first_sell = 0;
      int second_buy = INT_MIN;
      int second_sell = 0;
       
      for(int i=0;i<size;i++) {
         
          first_buy = max(first_buy,-arr[i]);//we set prices to negative, so the calculation of profit will be convenient
          first_sell = max(first_sell,first_buy+arr[i]);
          second_buy = max(second_buy,first_sell-arr[i]);//we can buy the second only after first is sold
          second_sell = max(second_sell,second_buy+arr[i]);
       
    }
     return second_sell;
}

// Using Dynamic approach
/*
  // Returns maximum profit with
// two transactions on a given
// list of stock prices, price[0..n-1]
int maxProfit(int price[], int n)
{
    // Create profit array and
    // initialize it as 0
    int* profit = new int[n];
    for (int i = 0; i < n; i++)
        profit[i] = 0;
 
    /* Get the maximum profit with
       only one transaction
       allowed. After this loop,
       profit[i] contains maximum
       profit from price[i..n-1]
       using at most one trans. */
    int max_price = price[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        // max_price has maximum
        // of price[i..n-1]
        if (price[i] > max_price)
            max_price = price[i];
 
        // we can get profit[i] by taking maximum of:
        // a) previous maximum, i.e., profit[i+1]
        // b) profit by buying at price[i] and selling at
        //    max_price
        profit[i]
            = max(profit[i + 1], max_price - price[i]);
    }
 
    /* Get the maximum profit with two transactions allowed
       After this loop, profit[n-1] contains the result */
    int min_price = price[0];
    for (int i = 1; i < n; i++) {
        // min_price is minimum price in price[0..i]
        if (price[i] < min_price)
            min_price = price[i];
 
        // Maximum profit is maximum of:
        // a) previous maximum, i.e., profit[i-1]
        // b) (Buy, Sell) at (min_price, price[i]) and add
        //    profit of other trans. stored in profit[i]
        profit[i] = max(profit[i - 1],
                        profit[i] + (price[i] - min_price));
    }
    int result = profit[n - 1];
 
    delete[] profit; // To avoid memory leak
 
    return result;
}
 
int main(){
    int arr[] = {10,22,5,75,65,80};
    int n = sizeof(arr) / sizeof(arr[0]);
      
    int x = maxtwobuysell(arr, n);
    cout<<"Maximum profit = "<<x<<" ";
    return 0;
}