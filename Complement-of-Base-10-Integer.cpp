1class Solution {
2public:
3    int bitwiseComplement(int n) {
4        int mask =1;
5        while(mask < n){
6            mask = mask<<1 | 1;
7
8        }
9        return mask ^ n; 
10    }
11};