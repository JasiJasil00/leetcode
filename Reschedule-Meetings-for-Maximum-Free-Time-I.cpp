class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        // Build list of gaps
        vector<int> gaps;
        gaps.push_back(startTime[0]);  // initial gap
        for (int i = 1; i < startTime.size(); ++i) {
            gaps.push_back(startTime[i] - endTime[i - 1]);
        }
        gaps.push_back(eventTime - endTime.back());  // final gap

        // Sliding window sum of size k+1
        int windowSum = accumulate(gaps.begin(), gaps.begin() + (k + 1), 0);
        int ans = windowSum;
        for (int i = k + 1; i < gaps.size(); ++i) {
            windowSum += gaps[i] - gaps[i - (k + 1)];
            ans = max(ans, windowSum);
        }
        return ans;
    }
};
