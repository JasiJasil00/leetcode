1class Solution {
2public:
3    int reverse(int n){
4        int t = 0;
5        while(n!=0){
6            t=t*10;
7            t=(t+(n%10));
8            n=n/10;
9        }
10        return t;
11    }
12    int mirrorDistance(int n) {
13        return abs(n-reverse(n));
14    }
15};