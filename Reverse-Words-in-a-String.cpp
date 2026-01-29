1class Solution {
2public:
3    string reverseWords(string s) {
4        int i=s.size()-1;
5        string result = "";
6
7        while( i >= 0 ){
8            while(i>=0 && s[i]==' ')i--;
9            if(i < 0)break;
10            int end =i;
11            while(i>=0 && s[i]!=' ')i--;
12            string word = s.substr(i + 1, end - i);
13            if (!result.empty()) {
14                result += " ";
15            }
16             result += word;
17
18        }
19        return result;
20    }
21};