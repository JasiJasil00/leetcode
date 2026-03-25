1class Solution {
2public:
3    bool canPartitionGrid(vector<vector<int>>& grid) {
4        int m = grid.size();
5        int n = grid[0].size();
6
7        vector<long long> row(m, 0);
8        vector<long long> col(n, 0);
9
10        for(int i = 0; i < m; i++){
11            for(int j = 0; j < n; j++){
12                row[i] += grid[i][j];
13                col[j] += grid[i][j];
14            }
15        }
16
17        long long sumrow = 0;
18        for(int i = 0; i < m; i++){
19            sumrow += row[i];
20        }
21
22        long long sumcol = 0;
23        for(int j = 0; j < n; j++){
24            sumcol += col[j];
25        }
26
27        long long sum = 0;
28
29        // Row partition
30        for(int i = 0; i < m; i++){
31            if(sumrow == sum) return true;
32            sum += row[i];
33            sumrow -= row[i];
34            if(sum > sumrow) break;
35        }
36
37        sum = 0;
38
39        // Column partition
40        for(int i = 0; i < n; i++){
41            if(sumcol == sum) return true;
42            sum += col[i];
43            sumcol -= col[i];
44            if(sum > sumcol) break;
45        }
46
47        return false;
48    }
49};