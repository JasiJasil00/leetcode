class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        std::sort(nums.begin(),nums.end());
        int n = nums.size();
        int result = 0;
        long long total = 0;
        int left = 0;
        for(int right = 0 ; right< n ; right++){
            total+=nums[right];
            while((long long)nums[right]*(right-left+1)-total>k ){
                total-=nums[left];
                left++;
            }
            result=std::max(result,right-left+1);
        }
        return result;
    }
};