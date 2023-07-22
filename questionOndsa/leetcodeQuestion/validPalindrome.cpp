#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
       int k=0;
       for(int i=0;i<s.length();i++){
           if(isalpha(s[i])){
               s[i] = tolower(s[i]);
           }
       }
       int n = s.length();
       bool ans = std::equal(s.begin(), s.begin() + n/2, s.rbegin(), s.rbegin() + n/2);
       return ans;
    }
};
int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    Solution solution;
    cout<<solution.isPalindrome(s)<<endl;
    return 0;
}


