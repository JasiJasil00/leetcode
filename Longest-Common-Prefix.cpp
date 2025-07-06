class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string result;
        int m= 200;
        for(int i = 0 ; i < n  ; i++){
            m = std::min(static_cast<int>(strs[i].size()), m);
        }
        for(int i = 0 ; i < m ; i ++){
            int j;
            for(j = 1 ; j < n ; j ++){
                if(strs[j][i]!=strs[0][i])break;
            }
            if(j>=n)result.push_back(strs[0][i]);
            else break;
        }
        return result;
    }
};