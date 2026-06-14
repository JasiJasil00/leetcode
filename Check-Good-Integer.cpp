1class Solution {
2public:
3    bool checkGoodInteger(int n) {
4        int sum = 0;
5        int sqsum = 0;
6        while(n!=0){
7            int m = n%10;
8            sum+=m;
9            sqsum+=(m*m);
10            n=n/10;
11        }
12        return ((sqsum-sum)>=50);
13    }
14};