1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        string result = "";
5        int level = 0;
6        for(char p : s){
7            if(p == '('){
8                if (level > 0) result += p;
9                level++;
10            }else if( p == ')'){
11                 level--;  
12                // If we're inside a primitive, add ')' to result
13                if (level > 0) result += p;
14            }
15        }
16        return result;
17    }
18};