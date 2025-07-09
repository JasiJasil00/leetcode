class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        vector<vector<int>> g = image;
        if(g[sr][sc]==color)return g;
        int target = g[sr][sc];
        g[sr][sc]=color;
        queue <pair<int,int>> q;
        visited[sr][sc]=1;
        q.push({sr,sc});
        int dp1[]={-1,0,1,0};
        int dp2[]={0,1,0,-1};
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(int i = 0 ; i < 4 ; i++){
                int row = x + dp1[i];
                int col = y + dp2[i];
                if(row>=0 && col>=0 && row<n && col < m && g[row][col]==target && !visited[row][col] ){
                    q.push({row,col});
                    visited[row][col]=1;
                    g[row][col]=color;
                }
            }
        }
        return g;
    }
};