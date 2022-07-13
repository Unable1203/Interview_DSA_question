//Longest palindrome string
#include <bits/stdc++.h>
using namespace std;
string palindromeLongest(string s){
    start = 0;
    maxLen = 1;
    for(int i=0; i<s.length();i++){
        int l = i-1;
        int r = i+1;cout<<" ="<<l<<r;
        while(l>=0 && r<len(s) && s[l] == s[r]){
            if(r-l+1 > maxLen){
                maxLen = r-l+1;
                start = l;

            }
        }
    }

    int l = i-1;
    int r = r+1;
    while(l>0 && r<len(s) && s[l] == s[r]){
        if(r-l+1 > maxLen){
            maxLem = r-l+1
            start =l;
        }
        l-=1;
        r+= 1;

    }
    return s[start:start+maxLen];
}
int main(){
    return 0;
}
