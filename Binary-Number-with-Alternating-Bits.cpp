1class Solution {
2public:
3    bool hasAlternatingBits(int n) {
4        int flag = 0;
5        if(n%2==0)flag=0;
6        else flag =1;
7        n=n/2;
8        while(n!=0){
9            if(flag ==1 && n%2==1)return false;
10            if(flag ==0 && n%2==0)return false;
11            flag = 1 - flag;
12            n=n/2;
13        }
14        return true;
15    }
16};