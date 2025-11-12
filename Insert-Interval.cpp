class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int start = newInterval[0];
        int end = newInterval[1];
        int i = 0;
       vector<vector<int>> result;
        while( i < intervals.size() && intervals[i][1]<start){
            result.push_back({intervals[i][0],intervals[i][1]});
            i++;   
        }
        if(i < intervals.size() && intervals[i][0]<=start){
            start = intervals[i][0];
        }
        while( i < intervals.size() && intervals[i][0] <= end){
            i++;
        }
        if(i > 0 && i-1 < intervals.size() && intervals[i-1][1] >= end ){
            end = intervals[i-1][1];
        }
         result.push_back({start,end});
         while (i < intervals.size()) {
            result.push_back(intervals[i]);
            i++;
        }

        return result;
    }
};