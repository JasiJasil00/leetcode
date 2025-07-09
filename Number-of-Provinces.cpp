class Solution {
public:
    void bfs (vector<vector<int>> & g, int pos,vector<int> & visited){
        queue <int> q;
        q.push(pos);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(int i = 0 ; i < g.size() ; i++){
                if(!visited[i] && g[node][i]==1){
                    q.push(i);
                }
            }
            visited[node]=1;
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector <int> visited(n,0);
        int count = 0;
        for(int i = 0 ; i < n ; i ++){
            if(!visited[i]){
                bfs(isConnected,i,visited);
                count++;
            }
        }
        return count;
    }
};