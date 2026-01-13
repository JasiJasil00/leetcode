1class Solution {
2public:
3    vector<int> findPeakGrid(vector<vector<int>>& mat) {
4        int n = mat.size();
5        int m = mat[0].size();
6        int i = 0;
7        int j = 0;
8        int a[]= {-1,1,0,0};
9        int b[]= {0,0,1,-1};
10        while( i < n  && j < m){
11            int x=i;
12            int y=j;
13            for(int k = 0 ; k < 4 ; k++){
14                if(i+a[k]>=0 && j+b[k]>=0 && i + a[k] < n && j + b[k] < m){
15                    if(mat[x][y]<mat[i+a[k]][j+b[k]]){
16                        x = i+a[k];
17                        y = j+b[k];
18                    }
19                }
20            }
21            if(i==x && j==y)return {i,j};
22            i=x;
23            j=y;
24        }
25        return {-1,-1};
26    }
27};