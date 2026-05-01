1class Solution {
2public:
3    vector<int> shuffle(vector<int>& nums, int n) {
4        int k = nums.size()/2;
5        int m = nums.size();
6        vector<int> result;
7        for(int i = 0 ; i < n ; i++){
8            result.push_back(nums[i]);
9            result.push_back(nums[i+k]);
10        }
11        return result;
12    }
13};