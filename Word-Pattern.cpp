1class Solution {
2public:
3    bool wordPattern(string pattern, string s) {
4      unordered_map<char, string> hash;
5        unordered_map<string, char> mem;
6
7        int i = 0, j = 0;
8
9        while (i < s.size() && j < pattern.size()) {
10            string inter = "";
11
12           
13            while (i < s.size() && s[i] != ' ') {
14                inter += s[i];
15                i++;
16            }
17
18            char ch = pattern[j];
19
20           
21            if (hash.find(ch) == hash.end()) {
22                hash[ch] = inter;
23            } else if (hash[ch] != inter) {
24                return false;
25            }
26
27          
28            if (mem.find(inter) == mem.end()) {
29                mem[inter] = ch;
30            } else if (mem[inter] != ch) {
31                return false;
32            }
33
34            j++;
35            i++; 
36        }
37
38       
39        if (j != pattern.size() || i < s.size()) return false;
40
41        return true;
42    }
43};