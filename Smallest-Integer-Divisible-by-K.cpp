1class Solution {
2public:
3    int smallestRepunitDivByK(int k) {
4        int num = 1;
5        map<int,int>hash;
6        int i =0;
7            while(hash[num%k]==0){
8                int mod = num%k;
9                hash[mod]=1;
10                num = mod*10 + 1;
11                i++; 
12                if(mod==0)return i;
13            }
14        return -1;
15    }
16};