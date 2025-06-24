class Solution {
public:
    bool palindrome(string &s, int l , int r){
        while(l<r && !((s[l]>=48 && s[l]<=57)||(s[l]>=65 && s[l]<=90)||(s[l]>=97 && s[l]<=122))){
            l++;
        }
        while(l<r && !((s[r]>=48 && s[r]<=57)||(s[r]>=65 && s[r]<=90)||(s[r]>=97 && s[r]<=122))){
            r--;
        }
        if(l>=r)return true;
        if(tolower(s[l])==tolower(s[r]))
        return palindrome(s,l+1,r-1);
        return false; 
    }
    bool isPalindrome(string s) {
        return palindrome(s,0,s.size()-1);
    }
};