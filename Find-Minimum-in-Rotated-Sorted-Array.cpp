class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int min=INT_MAX;
        while(low<=high){
            int mid= low + (high-low)/2;
            if(min > nums[mid] )min = nums[mid];
            if(nums[mid] > nums[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return min;
    }
};