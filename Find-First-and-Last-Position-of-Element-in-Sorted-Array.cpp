class Solution {
public:
    void findFirst(vector<int>& nums, int target, int low, int high, int& first) {
        if (low > high) return;
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            first = mid;
            findFirst(nums, target, low, mid - 1, first);  // go left
        } else if (nums[mid] > target) {
            findFirst(nums, target, low, mid - 1, first);
        } else {
            findFirst(nums, target, mid + 1, high, first);
        }
    }

    void findLast(vector<int>& nums, int target, int low, int high, int& last) {
        if (low > high) return;
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            last = mid;
            findLast(nums, target, mid + 1, high, last);  // go right
        } else if (nums[mid] > target) {
            findLast(nums, target, low, mid - 1, last);
        } else {
            findLast(nums, target, mid + 1, high, last);
        }
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int lower = -1;
        int upper = -1;
        findFirst(nums,target,0,nums.size()-1,lower);
        findLast(nums,target,0,nums.size()-1,upper);
        return{lower,upper};
    }
};