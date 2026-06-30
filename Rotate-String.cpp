1class Solution {
2public:
3    vector<int> computeLPS(string pattern){
4        int m = pattern.size();
5        vector<int> lps(m,0);
6        int len = 0;
7        int i = 1;
8        while(i<m){
9            if(pattern[i]==pattern[len]){
10                len++;
11                lps[i]=len;
12                i++;
13            }else{
14                if(len!=0){
15                    len = lps[len-1];
16
17                }else{
18                    lps[i]=0;
19                    i++;
20                }
21            }
22        }
23        return lps;
24    }
25    bool rotateString(string s, string goal) {
26        int n = s.size();     
27        vector<int>lps=computeLPS(goal);   
28        int i =0;
29        int j = 0;
30        while (i < 2 * n) {
31            char ch = s[i % n];
32
33            if (ch == goal[j]) {
34                i++;
35                j++;
36
37                if (j == n)
38                    return true;
39            } else {
40                if (j != 0) {
41                    j = lps[j - 1];
42                } else {
43                    i++;
44                }
45            }
46        }
47        return false;
48    }
49};