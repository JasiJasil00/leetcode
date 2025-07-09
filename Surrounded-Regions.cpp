class Solution {
public:
    void bfs(vector<vector<char>>& g, int row, int col,
             vector<vector<int>>& visited) {
        queue<pair<int, int>> q;
        q.push({row, col});
        visited[row][col] = 1;

        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        vector<pair<int, int>> region;
        bool touchesBoundary = false;

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            region.push_back({x, y});

            if (x == 0 || y == 0 || x == g.size() - 1 || y == g[0].size() - 1)
                touchesBoundary = true;

            for (int d = 0; d < 4; ++d) {
                int r = x + dx[d];
                int c = y + dy[d];

                if (r >= 0 && c >= 0 && r < g.size() && c < g[0].size() &&
                    g[r][c] == 'O' && !visited[r][c]) {
                    q.push({r, c});
                    visited[r][c] = 1;
                }
            }
        }

        if (!touchesBoundary) {
            for (auto [x, y] : region) {
                g[x][y] = 'X';
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        int n = board.size();
        if (n == 0) return;
        int m = board[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visited[i][j] && board[i][j] == 'O') {
                    bfs(board, i, j, visited);
                }
            }
        }
    }
};
