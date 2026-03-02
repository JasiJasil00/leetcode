1class Solution {
2public:
3    int minAddToMakeValid(string s) {
4        int count1 =0;
5        int count2 =0;
6        int count = 0;
7        for(int i = 0 ; i < s.size() ; i++){
8            if(s[i]=='(')count1++;
9            if(s[i]==')')count2++;
10            if(count2>count1){
11                count++;
12                count2=count1;
13            }
14        }
15        if(count1 > count2)count+=(count1-count2); 
16        return count;
17    }
18};