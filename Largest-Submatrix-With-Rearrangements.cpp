1class Solution {
2public:
3    int largestSubmatrix(vector<vector<int>>& matrix) {
4        int m = matrix.size();
5        int n = matrix[0].size();
6
7        vector<int> height(n, 0);
8        int maxi = 0;
9        for (int i = 0; i < m; i++) {
10            // Step 1: build histogram
11            for (int j = 0; j < n; j++) {
12                if (matrix[i][j] == 1)
13                    height[j] += 1;
14                else
15                    height[j] = 0;
16            }
17
18           
19            vector<int> temp = height;
20            sort(temp.begin(), temp.end(), greater<int>());
21
22            
23            for (int j = 0; j < n; j++) {
24                maxi = max(maxi, temp[j] * (j + 1));
25            }
26        }
27        return maxi;
28    }
29};