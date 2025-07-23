class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
         int n = nums.size();
        vector<vector<int>> result;

        for (int mask = 0; mask < (1 << n); ++mask) {
            vector<int> subset;
            for (int j = 0; j < n; ++j) {
                if ((mask & (1 << j)) != 0) {
                    subset.push_back(nums[j]);
                }
            }
            result.push_back(subset);
        }

        return result;
    }
};