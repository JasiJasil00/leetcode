1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int max = INT_MIN;
5        int n = nums.size();
6        int prefixsum = 1;
7        int suffixsum = 1;
8        for(int i = 0 ; i < n ; i++){
9            prefixsum*=nums[i];
10            suffixsum*=nums[n-1-i];
11            max = std::max(suffixsum,max);
12            max = std::max(prefixsum,max);
13            if(prefixsum==0)prefixsum=1;
14            if(suffixsum==0)suffixsum=1;
15        }
16        return max;
17    }
18};