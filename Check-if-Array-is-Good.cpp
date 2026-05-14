1class Solution {
2public:
3    bool isGood(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        int n = nums.size()-1;
6        for(int i = 0 ; i < n-1 ; i++){
7            if(nums[i]!=(i+1))return false;
8        }
9        if((n)!=nums[n])return false;
10        return nums[n-1]==nums[n];
11    }
12};