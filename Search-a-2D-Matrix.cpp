1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int n = matrix.size();
5        int m = matrix[0].size();
6        int low = 0;
7        int high = n*m - 1;
8        while(low <= high){
9            int mid = low + ((high-low)/2);
10            if(matrix[mid/m][mid%m]< target){
11                low = mid + 1;
12            }else if( matrix[mid/m][mid%m] > target){
13                high = mid - 1;
14            }else{
15                return true;
16            }
17        }
18        return false;
19    }
20};