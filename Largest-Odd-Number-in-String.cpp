1class Solution {
2public:
3    string largestOddNumber(string num) {
4        int i = num.size()-1;
5        while(i>=0){
6            if((num[i]-'0')%2==1)return num.substr(0,i+1);
7            i--;
8        }
9        return "";
10    }
11};