1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int n = matrix.size();
5        int m = matrix[0].size();
6        int low = 0;
7        int high = n-1;
8        int mid;
9        while(low <= high){
10            mid = low + ((high-low)/2);
11            if(matrix[mid][0]<target){
12                low=mid+1;
13            }else if(matrix[mid][0]>target){
14                high = mid-1;
15            }else{
16                return true;
17            }
18        }
19        if (high < 0) return false;
20        int i = high;
21        low = 0;
22        high = m-1;
23        while(low <= high){
24            mid = low + ((high-low)/2);
25            if(matrix[i][mid]<target){
26                low=mid+1;
27            }else if(matrix[i][mid]>target){
28                high = mid-1;
29            }else{
30                return true;
31            }
32        }
33        return false;
34    }
35};