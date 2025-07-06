class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end(), [](int a, int b) {
            return a > b; //
        });
        int i;
        int count = 0;
        for(i = 1 ; i < n ; i++){
            if(nums[i-1]!=nums[i]){
                count++;
                if(count==2)return nums[i];
            }
        }
        return nums[0];
    }
};