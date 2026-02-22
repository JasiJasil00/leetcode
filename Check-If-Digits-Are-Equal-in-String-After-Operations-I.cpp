1class Solution {
2public:
3    bool hasSameDigits(string s) {
4        while(s.size()>2){
5            string inter="";
6            for(int i = 0 ; i < s.size()-1 ; i++){
7                char c = ((s[i]+s[i+1])%10)+'0';
8                inter += c;
9            }
10            s=inter;
11        }
12        return s[0]==s[1];
13    }
14};