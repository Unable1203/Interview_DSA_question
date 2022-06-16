//Problem - 13th
long long maxSubarraySum(int arr[], int n){
       
       long long max_ans=INT_MIN;
       long long maxx=0;
       
       for(int i=0; i<n; i++){
           
           maxx = maxx + arr[i];
           
           max_ans = max( maxx, max_ans);
           
           if( maxx < 0){ // that set is no longer useful 
               maxx=0;
           }
       }
       
       return max_ans;
   }