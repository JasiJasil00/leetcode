class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
        if (x == 0) return 0; 
        int min = INT_MAX;
        std::set <int> bst;
        for(int i = x; i < nums.size();i++){
            bst.insert(nums[i-x]);
            auto it = bst.upper_bound(nums[i]);
            if(it!=bst.end())min=std::min(min,(*it-nums[i]));
            if (it != bst.begin()) {
                --it;
                min = std::min(min, abs(*it - nums[i]));
            }    
        }
        return min;
    }
};