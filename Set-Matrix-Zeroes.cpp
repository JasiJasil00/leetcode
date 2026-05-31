1class Solution {
2public:
3    void setZeroes(vector<vector<int>>& matrix) {
4        int m = matrix.size();
5        int n = matrix[0].size();
6        vector<int> row(m,1);
7        vector<int> col(n,1);
8        for(int i = 0 ; i < m ; i++){
9            for(int j = 0; j < n ; j++){
10                if(matrix[i][j]==0){
11                    row[i]=0;
12                    col[j]=0;
13                }
14            }
15        }
16        //row;
17        for(int i = 0 ; i < m ;i++){
18            if(row[i]==0){
19                for(int j = 0 ; j < n ; j++){
20                    matrix[i][j]=0;
21                }
22            }
23        }
24        for(int j = 0 ; j < n ; j++){
25            if(col[j]==0){
26                for(int i = 0 ; i < m ; i++){
27                    matrix[i][j]=0;
28                }
29            }
30        }
31    }
32};