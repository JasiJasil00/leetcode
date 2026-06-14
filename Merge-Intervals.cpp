1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4        vector<vector<int>> result;
5        int n = intervals.size();
6        sort(intervals.begin(),intervals.end());
7        int start = intervals[0][0];
8        int end = intervals[0][1];
9        for(int i = 1 ; i < n ; i ++){
10            if(end >= intervals[i][0] && end < intervals[i][1] ){
11                end = intervals[i][1];
12            }else if(end < intervals[i][0] ){
13                result.push_back({start,end});
14                start = intervals[i][0];
15                end = intervals[i][1];
16            }
17        }
18        result.push_back({start,end});
19        return result;
20    }
21};