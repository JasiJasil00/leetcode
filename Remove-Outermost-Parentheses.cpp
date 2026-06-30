1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        int count = 0;
5        int n = s.size();
6        string result= "";
7        for(int i = 0 ; i < n ; i++ ){
8            if(s[i]=='('){
9                count++;
10            }else {
11                if(count==2){
12                result+=s[i];
13            }
14                if(count>0)count--;
15            }
16             if(count>1){
17                result+=s[i];
18            }
19        }
20        return result;
21    }
22};