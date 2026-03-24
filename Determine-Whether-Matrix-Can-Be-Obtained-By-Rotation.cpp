1class Solution {
2public:
3    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
4        int n = mat.size(); int m = mat[0].size();
5        for(int k = 0 ; k < 4 ; k++){
6            if(mat==target)return true;
7            for(int i = 0; i < n ; i++){
8                for (int j = i; j < m; j++)
9                    swap(mat[i][j], mat[j][i]);
10                 
11            }
12            reverse(mat.begin(), mat.end());
13        } 
14        return false;
15    }
16};