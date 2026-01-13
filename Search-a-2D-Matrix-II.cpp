1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int n = matrix.size();
5        int m = matrix[0].size();
6        int row = 0;
7        int col = m-1;
8        while(row < n && col >=0 ){
9            if(matrix[row][col] < target ){
10                row++;
11            }else if(matrix[row][col] > target){
12                col--;
13            }else{
14                return true;
15            }
16            
17        }
18        return false;
19    }
20};