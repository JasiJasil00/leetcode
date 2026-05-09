1class Solution {
2public:
3    int minFlips(string s) {
4       int n = s.length();
5       if (n < 3) return 0;
6       int count0 = count(s.begin(),s.end(),'0');
7        int count1 = n - count0;
8        int res1 = count0;
9        int res2 = max(count1 - 1, 0);
10        int res3 = count1-(s[0]-'0')-(s[n-1]-'0');
11        return min({res1,res2,res3});
12    }
13};