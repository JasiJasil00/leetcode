1class Solution {
2public:
3    int minCost(int n, vector<vector<int>>& edges) {
4
5        vector<vector<pair<int,int>>> graph(n);
6
7        // Build graph
8        for (auto &e : edges) {
9            int u = e[0], v = e[1], w = e[2];
10
11            // forward edge
12            graph[u].push_back({v, w});
13
14            // reverse edge with double cost
15            graph[v].push_back({u, 2 * w});
16        }
17
18        // Dijkstra
19        vector<int> dist(n, INT_MAX);
20        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
21
22        dist[0] = 0;
23        pq.push({0, 0});
24
25        while (!pq.empty()) {
26            auto [d, u] = pq.top();
27            pq.pop();
28
29           
30
31            for (auto &[v, w] : graph[u]) {
32                if (dist[u] + w < dist[v]) {
33                    dist[v] = dist[u] + w;
34                    pq.push({dist[v], v});
35                }
36            }
37        }
38
39        return dist[n - 1] == INT_MAX ? -1 : dist[n - 1];
40    }
41};
42