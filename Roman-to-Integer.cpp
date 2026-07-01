1class Solution {
2public:
3    int intfromroman(char c){
4        if(c=='I'){
5            return 1;
6        }else if(c=='V'){
7            return 5;
8        }else if(c=='X'){
9            return 10;
10        }else if(c=='L'){
11            return 50;
12        }else if(c=='C'){
13            return 100;
14        }else if(c=='D'){
15            return 500;
16        }else if(c=='M'){
17            return 1000;
18        }
19        return -1;
20    }
21    int romanToInt(string s) {
22        int sum =0;
23        int n = s.size();
24        int prev = -1;
25        for(int i = n-1 ; i>=0  ; i--){
26            int m = intfromroman(s[i]);
27            if(prev>m)sum-=m;
28            else sum=sum+m;
29            prev=m;
30        }
31        return sum;
32    }
33};