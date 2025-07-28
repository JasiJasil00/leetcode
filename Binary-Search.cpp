class Solution {
public:
    int recursive(vector<int> &nums, int target, int low, int high){
        if(low>high)return -1;
        int mid = (low+high)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target) return recursive(nums,target,low,mid-1);
        else return recursive(nums,target,mid+1,high);

    }
    int search(vector<int>& nums, int target) {
        return recursive(nums,target,0,nums.size()-1);
    }
};