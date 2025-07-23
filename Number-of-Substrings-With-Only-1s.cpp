class Solution {
public:
    int numSub(string s) {
        const int MOD = 1e9 + 7;
        long long count = 0, ones = 0;

        for (char c : s) {
            if (c == '1') {
                ones++;
                count = (count + ones) % MOD;
            } else {
                ones = 0;
            }
        }

        return (int)count;
    }
};
