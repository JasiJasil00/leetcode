class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for(int j = 1 ; j < n ; j++){
            if(i<j && nums[i]==0 && nums[j]!=0){
                nums[i]=nums[j];
                nums[j]-=nums[j];
                i++;
            }
            if(nums[i]!=0 && nums[j]==0){
                i=j;
            }
        }
    }
};