// Problem - 47
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string countAndSay(int n) {
        
        if(n == 1) return "1";
        if(n == 2) return "11";
        string s = "11";
        for(int i=1;i<=n;i++){
            string t="";
            s = s+'&';
            int count =1;
            for(int j=1;j<s.length();j++){
                if(s[j]!=s[j-1]){
                    t=t+to_string(count);
                    t=t+s[j-1];
                    count =1;
                }
                else count++;
            }
            s = t;
        }
        return s;
        
    }
};
int main(){
    Solution s1;
    string s = s1.countAndSay(332);
    cout<<s;
    return 0;
}