1class Solution {
2public:
3    char processStr(string s, long long k) {
4        long long len = 0;
5
6        // Find final length
7        for (char c : s) {
8            if (c == '*') {
9                if (len > 0) len--;
10            } 
11            else if (c == '#') {
12                len *= 2;
13            } 
14            else if (c == '%') {
15                // length unchanged
16            } 
17            else {
18                len++;
19            }
20        }
21
22        if (k >= len) return '.';
23
24          // Work backwards
25        for (int i = s.size() - 1; i >= 0; i--) {
26            char c = s[i];
27
28            if (c >= 'a' && c <= 'z') {
29                len--;
30                if (k == len) return c;
31            }
32            else if (c == '#') {
33                len /= 2;
34                k %= len;
35            }
36            else if (c == '%') {
37                k = len - 1 - k;
38            }
39            else if (c == '*') {
40                len++;
41            }
42        }
43
44        return '.';
45        
46    }
47};