class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1)return true;
        if(!nums[0] && nums.size()!=1)return false;
        int min = 1;
        int  max = nums[0];
        while(max < nums.size()-1){
            int innermax = -1;
            int pos = -1;

            for (int i = min; i <= max; i++) {
                if (i + nums[i] > innermax) {   // ✅ fix: compare to innermax, not max
                    innermax = i + nums[i];     // ✅ fix: store total reach, not just nums[i]
                    pos = i;
                }
            }

            if (innermax <= max) return false;  // ✅ if no progress, stuck

            min = max + 1;                      // ✅ move window forward correctly
            max = innermax;      
        }
        return true;
    }
};