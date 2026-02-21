1class Solution {
2public:
3    bool isPrime(int n) {
4        if (n < 2) return false;
5        for (int i = 2; i * i <= n; i++) {
6            if (n % i == 0) return false;
7        }
8        return true;
9    }
10    int countPrimeSetBits(int left, int right) {
11        int count =0;
12        for(int i = left ; i  <= right ; i++){
13            int bits = __builtin_popcount(i);  // counts set bits
14            if (isPrime(bits)) {
15                count++;
16            }
17        }
18        return count;
19    }
20};