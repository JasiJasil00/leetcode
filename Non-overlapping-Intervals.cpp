class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
      int n = intervals.size();
        if (n == 0) return 0;

        // Sort by end time
        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });

        int count = 1; // count of non-overlapping intervals we keep
        int end_time = intervals[0][1];

        for (int i = 1; i < n; i++) {
            if (intervals[i][0] >= end_time) { // ✅ no overlap
                count++;
                end_time = intervals[i][1];
            }
        }

        return n - count; // ✅ intervals to remove
    }
};