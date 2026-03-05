1class Solution {
2public:
3    int minOperations(string s) {
4        char c = s[0];
5        int count =0;
6        if(c=='1'){
7                c='0';
8            }else{
9                c='1';
10            }
11        for(int i = 1 ; i < s.size() ; i++){
12            if(s[i]!=c){
13                count++;
14            }
15            if(c=='1'){
16                c='0';
17            }else{
18                c='1';
19            }
20        }
21        return (count > s.size()/2) ? s.size()-count : count;
22    }
23};