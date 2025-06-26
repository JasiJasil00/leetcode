class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int m = -1;
        for(int i = n-1 ; i >=1 ; i--){
                if(nums[i-1]<nums[i]){
                    m=i-1;
                    break;
                }
        }
        if(m==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i = n-1 ; i >= 1 ; i--){
            if(nums[i]>nums[m]){
                swap(nums[i],nums[m]);
                break;
            }
        }
        reverse(nums.begin()+m+1,nums.end());
    }
};