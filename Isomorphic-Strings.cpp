1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4            if(s.size()!=t.size())return false;
5          map <char,char> hash;
6          int n = s.size();
7          for(int i = 0 ; i < n ; i++){
8            if(hash.find(s[i])==hash.end()){
9                hash[s[i]]=t[i];
10            }else if(hash.find(s[i])!=hash.end() && hash[s[i]]!=t[i]){
11                return false;
12            }
13          }  
14          hash.clear();
15          for(int i = 0 ; i < n ; i++){
16            if(hash.find(t[i])==hash.end()){
17                hash[t[i]]=s[i];
18            }else if(hash.find(t[i])!=hash.end() && hash[t[i]]!=s[i]){
19                return false;
20            }
21          }  
22          return true;
23    }
24};