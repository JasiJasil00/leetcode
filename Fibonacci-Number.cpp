class Solution {
public:
    std::unordered_map<int, int> dp;
    int fib(int n) {
        dp[0] = 0;
        dp[1] = 1;
        if(dp.contains(n)) return dp[n];
        dp[n] = fib(n - 1) + fib(n - 2);
        return dp[n];
    }
};