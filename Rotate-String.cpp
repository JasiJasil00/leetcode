1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4        int n = s.size();
5        for(int i = 0 ; i < n ; i++){
6            if(s==goal)return true;
7            s+=s[0];
8            s.erase(s.begin()+0);
9        }
10        return false;
11    }
12};