1class Solution {
2public:
3    int Cost(int n , vector<int> &dp){
4        if(n==1)return 0;
5        int a;
6        int b;
7        if(dp[n]!=-1)return dp[n];
8        if(n%2==0){
9            a=n/2;
10            b=n/2;
11        }else{
12            a=(n/2)+1;
13            b=n/2;
14        }
15        dp[a] = Cost(a,dp);
16        dp[b] = Cost(b,dp);
17        return dp[n] = a*b + dp[a] + dp[b];
18    }
19    int minCost(int n) {
20        vector<int> dp(n+1,-1);
21        return Cost(n,dp);
22    }
23};