1class Solution {
2public:
3    int countSetBits(int n) {
4        int count = 0;
5        while (n > 0) {
6            n = n & (n - 1);  
7            count++;
8        }
9        return count;
10    }
11    bool isPrime(int n) {
12        if (n < 2) return false;
13        for (int i = 2; i * i <= n; i++) {
14            if (n % i == 0) return false;
15        }
16        return true;
17    }
18    int countPrimeSetBits(int left, int right) {
19        int count =0;
20        for(int i = left ; i  <= right ; i++){
21            int bits = countSetBits(i);  
22            if (isPrime(bits)) {
23                count++;
24            }
25        }
26        return count;
27    }
28};