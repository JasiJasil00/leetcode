1class Solution {
2public:
3    int countBinarySubstrings(string s) {
4         vector<int> groups;
5         groups.push_back(1);
6          for(int i = 1; i < s.size(); i++){
7            if(s[i] == s[i-1]) {
8                groups.back()++;
9            } else {
10                groups.push_back(1);
11            }
12        }
13         int ans = 0;
14         for(int i = 0 ; i < groups.size()-1 ; i++){
15            ans+=std::min(groups[i],groups[i+1]);
16         }
17         return ans;
18    }
19};