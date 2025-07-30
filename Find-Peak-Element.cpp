class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int low = 0;
        int high = nums.size()-1;
        int mid;
        while(low <= high){
            mid =low + (high - low)/2;
            if(mid>0 && mid < nums.size()-1 && nums[mid]<nums[mid-1] && nums[mid] > nums[mid+1] ){
                high = mid-1;
            }else if(mid>0 && mid < nums.size()-1 && nums[mid]>nums[mid-1] && nums[mid] < nums[mid+1]){
                low = mid +1;
            }else if(mid>0 && mid < nums.size()-1 && nums[mid]>nums[mid-1] && nums[mid] > nums[mid+1]){
                return mid;
            }
            else{
                if(high - low == 1){
                    if(nums[high]>nums[low]){
                        return high;
                    }else{
                        return low;
                    }
                }else{
                    low = mid+1;
                }
            }
        }
        return mid;
    }
};