1class Solution {
2public:
3    const int MOD = 1e9+7;
4
5    int solve(int z, int o, int last, int limit, 
6              vector<vector<vector<int>>> &dp){
7
8        if(z == 0 && o == 0) return 1;
9
10        if(dp[z][o][last] != -1) return dp[z][o][last];
11
12        long long ans = 0;
13
14        if(last == 0){
15            for(int k=1;k<=limit && k<=o;k++){
16                ans = (ans + solve(z, o-k, 1, limit, dp)) % MOD;
17            }
18        }
19        else{
20            for(int k=1;k<=limit && k<=z;k++){
21                ans = (ans + solve(z-k, o, 0, limit, dp)) % MOD;
22            }
23        }
24
25        return dp[z][o][last] = ans;
26    }
27
28    int numberOfStableArrays(int zero, int one, int limit) {
29        vector<vector<vector<int>>> dp(
30            zero+1, vector<vector<int>>(one+1, vector<int>(2,-1)));
31
32        long long ans = 0;
33
34        for(int k=1;k<=limit && k<=zero;k++)
35            ans = (ans + solve(zero-k, one, 0, limit, dp)) % MOD;
36
37        for(int k=1;k<=limit && k<=one;k++)
38            ans = (ans + solve(zero, one-k, 1, limit, dp)) % MOD;
39
40        return ans;
41    }
42};