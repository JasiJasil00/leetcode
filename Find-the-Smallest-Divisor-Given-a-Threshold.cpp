class Solution {
public:
    bool possible(vector<int>& nums, int m, int d) {
        int total = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            total+=ceil((double)nums[i]/d);
        }
        return total <= m;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int max = INT_MIN;
        for (int day: nums) {
            max = std::max(max, day);
        }
        int low = 1;
        int high = max;
        int ans=-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(possible(nums,threshold,mid)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};