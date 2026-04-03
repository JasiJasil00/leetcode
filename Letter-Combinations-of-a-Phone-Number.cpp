1class Solution {
2public:
3    string numbertoletter(char s){
4        if(s == '2') return "abc";
5        else if(s == '3') return "def";
6        else if(s == '4') return "ghi";
7        else if(s == '5') return "jkl";
8        else if(s == '6') return "mno";
9        else if(s == '7') return "pqrs";
10        else if(s == '8') return "tuv";
11        else if(s == '9') return "wxyz";
12        return "";
13    }
14
15    vector<string> letterCombinations(string digits) {
16        vector<string> result;
17
18        if(digits.size() == 0) return result;
19
20        result.push_back(""); // base case
21
22        for(int i = 0; i < digits.size(); i++){
23            vector<string> temp;
24            string letters = numbertoletter(digits[i]);
25
26            for(string s : result){
27                for(char c : letters){
28                    temp.push_back(s + c);
29                }
30            }
31
32            result = temp;
33        }
34
35        return result;
36    }
37};