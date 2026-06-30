1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        int m[26]={0};
5        if(s.length()!=t.length())return false;
6        int n = s.size();
7        for(int i = 0 ; i < n ; i++){
8            m[s[i]-'a']++;
9        }
10        for(int i = 0 ; i < n ; i++){
11            m[t[i]-'a']--;
12            if(m[t[i]-'a']<0)return false;
13        }
14        return true;
15    }
16};