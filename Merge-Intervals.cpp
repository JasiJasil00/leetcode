class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector <vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        for(int i = 0 ; i < n  ; i ++){
            int start = intervals[i][0];
            int end = intervals[i][1];

            if(!ans.empty() &&  end<=ans.back()[1])continue;
            int j;
            for(j = i+1 ; j < n ; j++){
                if( intervals[j][0]<=end){
                    end=max(end,intervals[j][1]);
                }else{
                    break;
                }
            }
            i = j-1;
            ans.push_back({start,end});
        }
        return ans;
    }
};