1class Solution {
2public:
3    string countAndSay(int n) {
4        string result = "1";
5        for(int i = 0 ; i < n-1 ; i++){
6            string inter = result;
7            char c = inter[0];
8            int count = 1;
9            result="";
10            for(int i = 1 ; i < inter.size() ; i++){
11                if(inter[i]==c){
12                    count++;
13                }else{
14                    result+=(count+'0');
15                    result+=c;
16                    c=inter[i];
17                    count =1;
18                }
19            }
20            result+=(count+'0');
21            result+=c;
22
23        }
24        return result;
25
26    }
27};