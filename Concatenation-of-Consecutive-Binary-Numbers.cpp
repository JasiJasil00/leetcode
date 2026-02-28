1class Solution {
2public:
3    int countbits(int n){
4        int count =0;
5        while(n!=0){
6             n >>= 1;
7            count++;
8        }
9        return count;
10    }
11    int concatenatedBinary(int n) {
12          long long num = 0;
13        const int MOD = 1e9 + 7;
14        int length = 0;
15
16        for(int i = 1; i <= n; i++) {
17            // If i is power of 2, increase bit length
18
19            num = ((num << (countbits(i))) % MOD + i) % MOD;
20        }
21
22        return num;
23    }
24};