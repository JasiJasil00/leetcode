class Solution {
public:
    bool possible(vector<int>& nums, int k, int val) {
        int count = 1; // start with 1 subarray
    int total = 0;
    for (int num : nums) {
        if (total + num > val) { 
            count++;
            total = num; // start new subarray with current number
            if (count > k) return false; // too many splits
        } else {
            total += num;
        }
    }
    return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int max = INT_MIN;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (max < nums[i])
                max = nums[i];
            sum += nums[i];
        }
        int low = max;
        int high = sum;
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low)/ 2;
            if (possible(nums, k, mid)){
                ans = mid;
                cout << ans << " ";
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};