// Problem - 45
#include <bits/stdc++.h>
using namespace std;
// Brute force O(n2) and O(n2)
bool areRotational(string str1, string str2)
{
    if(str1.length() != str2.length()){
        return false;
    }

    string temp = str1 + str2;
    return (temp.find(str2) != string::npos);
}
// Optimal one read from geeksforgeeks article
int main()
{
   string str1 = "AACD", str2 = "ACDA";
   if(areRotational(str1, str2))
     printf("Strings are rotations of each other");
   else
      printf("Strings are not rotations of each other");
   return 0;
}
