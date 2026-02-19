1class Solution {
2public:
3    int countBinarySubstrings(string s) {
4         int res =0;
5         int countlen = 1;
6         int prevlen = 0;
7         for (int i = 0 ; i < s.size()-1 ; i++){
8            if(s[i]==s[i+1]){
9                countlen++;
10            }else{
11                res+=min(countlen,prevlen);
12                prevlen=countlen;
13                countlen=1;
14            }
15         }
16         res+=min(countlen,prevlen);
17         return res;
18    }
19};