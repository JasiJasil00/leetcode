1class Solution {
2public:
3    int minimumCost(vector<int>& nums) {
4      int min1 = INT_MAX;
5      int min2 = INT_MAX;
6      for(int i = 1 ; i < nums.size() ; i++){
7        if (nums[i] < min1) {
8                min2 = min1;
9                min1 = nums[i];
10            } else if (nums[i] < min2) {
11                min2 = nums[i];
12            }
13        }
14      
15      return nums[0]+min1+min2;    
16    }
17};