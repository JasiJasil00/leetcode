class Solution {
public:
    int maxFreeTime(int eventTime, vector<int>& startTime, vector<int>& endTime) {
        int n = startTime.size();

        // Step 1: Compute gaps between meetings
        vector<int> gaps;
        gaps.push_back(startTime[0]);  // gap before first meeting
        for (int i = 1; i < n; ++i) {
            gaps.push_back(startTime[i] - endTime[i - 1]);  // gap between meetings
        }
        gaps.push_back(eventTime - endTime.back());  // gap after last meeting

        // Step 2: Precompute max gap to the left and right of each gap
        vector<int> maxLeft(n + 1);     // maxLeft[i] = max gap[0..i]
        vector<int> maxRight(n + 1);    // maxRight[i] = max gap[i..n]

        maxLeft[0] = gaps[0];
        for (int i = 1; i <= n; ++i) {
            maxLeft[i] = max(maxLeft[i - 1], gaps[i]);
        }

        maxRight[n] = gaps[n];
        for (int i = n - 1; i >= 0; --i) {
            maxRight[i] = max(maxRight[i + 1], gaps[i]);
        }

        // Step 3: Try removing each meeting and place it in best possible gap
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int duration = endTime[i] - startTime[i];
            int adjSum = gaps[i] + gaps[i + 1];  // total gap if we remove meeting i

            int leftMax = (i > 0) ? maxLeft[i - 1] : 0;
            int rightMax = (i + 2 <= n) ? maxRight[i + 2] : 0;

            if (duration <= max(leftMax, rightMax)) {
                ans = max(ans, adjSum + duration);  // can relocate the meeting
            } else {
                ans = max(ans, adjSum);  // cannot relocate
            }
        }

        return ans;
    }
};
