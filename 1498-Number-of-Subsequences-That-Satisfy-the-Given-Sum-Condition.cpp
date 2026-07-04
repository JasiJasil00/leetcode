class Solution {
public:
    int MOD=1e9+7;
    int numSubseq(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        sort(nums.begin(),nums.end());
        int sum = 0;
        long long count= 0;
        vector<long long> power(nums.size());
power[0] = 1;

for (int i = 1; i < nums.size(); i++) {
    power[i] = (power[i - 1] * 2) % MOD;
}
        while(low<=high){
            int sum = nums[low]+nums[high];
            if(sum<=target){
                count+=(power[high-low]%MOD);
                low++;
            }else{
               
                high--;
                
            }
        }
       
        return count%MOD;
    }
};