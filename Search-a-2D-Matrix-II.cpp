1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int n = matrix.size();
5        int m = matrix[0].size();
6        int row =0;
7        int col = m-1;
8        while(row<=n-1 && col>=0){
9            if(matrix[row][col]==target)return true;
10            if(matrix[row][col]>target){
11                col--;
12            }else{
13                row++;
14            }
15        }
16        return false;
17    }
18};