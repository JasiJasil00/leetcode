class Solution {
public:
    void bfs(vector<vector<char>>& g , int row , int col, vector<vector<int>> & visited){
        queue<pair<int,int>> q;
        q.push({row,col});
        visited[row][col] = 1;

        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        while(!q.empty()){
            pair<int,int> node = q.front();
            q.pop();

            for (int d = 0; d < 4; ++d) {
                int r = node.first + dx[d];
                int c = node.second + dy[d];

                if (r >= 0 && c >= 0 && r < g.size() && c < g[0].size() &&
                    g[r][c] == '1' && !visited[r][c]) {
                    q.push({r, c});
                    visited[r][c] = 1;
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n , vector<int>(m, 0));
        int count = 0;

        for(int i = 0; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(!visited[i][j] && grid[i][j] == '1'){
                    bfs(grid, i, j, visited);
                    count++;
                }
            }
        }
        return count;
    }
};
