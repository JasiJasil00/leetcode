1class Solution {
2public:
3    int myAtoi(string s) {
4        int i = 0 ; 
5        int n = s.size();
6        int p =1;
7        long long num=0;
8
9        while( i < n && s[i]==' ')i++;
10
11        if(i < n && (s[i]=='-' || s[i]=='+')){
12            p=(s[i]=='-')?-1:1;
13            i++;
14        }
15        while(i < n && isdigit(s[i])){
16             int digit = s[i] - '0';
17
18            num = num * 10 + digit;
19            if(p==1 && num>=INT_MAX)return INT_MAX;
20            if(p==-1 && -num<=INT_MIN)return INT_MIN;
21           
22            i++;
23        }
24       
25        return num*p;
26    }
27};