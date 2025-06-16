class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        vector<int>minright(n);

        minright[n-1]=nums[n-1];
        for(int i = n-2 ; i >=0 ; i --)minright[i]=min(minright[i+1],nums[i]);

        int maxleft = nums[0];
        for(int i = 1 ; i <= n-2 ; i ++){
            if(maxleft<nums[i] && nums[i]<minright[i+1]){
                sum+=2;
            }else if(nums[i-1]<nums[i] && nums[i]<nums[i+1]){
                 sum+=1;
            }
            maxleft= max(maxleft,nums[i]);
        }
        return sum;
    }
};