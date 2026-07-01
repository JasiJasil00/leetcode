1class Solution {
2public:
3    int maxDepth(string s) {
4       int max = 0;
5       int level = 0;
6       int n = s.size();
7       for(int i = 0 ; i < n ; i++){
8        if(s[i]=='('){
9            level++;
10        }else if(s[i]==')'){
11            level--;
12        }
13        max=std::max(max,level);
14       } 
15       return max;
16    }
17};