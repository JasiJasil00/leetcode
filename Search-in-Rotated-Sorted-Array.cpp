class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target)return mid;
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && nums[mid]>=target){
                    
                     high=mid-1;
                }else{
                   low=mid+1;
                }
            }else{
                if(nums[high]>=target && nums[mid]<=target){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};