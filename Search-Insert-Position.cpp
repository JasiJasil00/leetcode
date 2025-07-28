class Solution {
public:
    void recursive(vector<int> &nums, int target, int low, int high,int &ans){
        if(low>high)return;
        int mid = (low+high)/2;
        if(nums[mid]==target){ans = mid;}
        else if(nums[mid]>target){
        ans = mid;
recursive(nums,target,low,mid-1,ans);
        } 
        else  recursive(nums,target,mid+1,high,ans);

    }
    int searchInsert(vector<int>& nums, int target) {
        int ans=nums.size();
        recursive(nums,target,0,nums.size()-1,ans);
        return ans;
    }
};