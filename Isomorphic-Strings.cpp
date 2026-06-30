1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4        vector<int> m1(256,0);
5        vector<int> m2(256,0);
6        for(int i = 0 ; i < s.size() ; i++){
7            if(m1[s[i]]!=m2[t[i]])return false;
8            m1[s[i]]=i+1;
9            m2[t[i]]=i+1;
10        }
11        return true;
12    }
13};