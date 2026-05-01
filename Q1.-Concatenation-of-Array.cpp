1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> result;
6        for(int i = 0 ; i < 2*n ; i++){
7            result.push_back(nums[i%n]);
8        }
9        return result; 
10    }
11};