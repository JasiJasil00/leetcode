class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int i = 0;
        int max = 0;
        for (int j = 0; j < nums.size() ; j++){
            if(nums[j]==1){
                i++;
            }else{
                if(max < i)max=i;
                i=0;
            }
        }
        if(max < i)max=i;
        return max;
    }
};