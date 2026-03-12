1class Solution {
2public:
3    double myPow(double x, int n) {
4        long long N = n;
5        
6        if(N < 0){
7            x = 1/x;
8            N = -N;
9        }
10
11        double ans = 1;
12
13        while(N){
14            if(N % 2) ans *= x;
15            x *= x;
16            N /= 2;
17        }
18
19        return ans;
20    }
21};