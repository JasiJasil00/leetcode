class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;

        int maxSum = nums[0];     // For normal max subarray (Kadane)
        int curMax = 0;

        int minSum = nums[0];     // For min subarray
        int curMin = 0;

        for (int num : nums) {
            curMax = max(curMax + num, num);
            maxSum = max(maxSum, curMax);

            curMin = min(curMin + num, num);
            minSum = min(minSum, curMin);

            total += num;
        }

        // If all numbers are negative, total - minSum == 0
        if (maxSum < 0) return maxSum;

        return max(maxSum, total - minSum);
    }
};
