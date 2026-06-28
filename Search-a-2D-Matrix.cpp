1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int n = matrix.size();
5        for(int i = 0 ; i < n ; i++){
6            int low = 0;
7            int high = matrix[i].size()-1;
8            if(matrix[i][low]<=target && matrix[i][high]>=target){
9                while(low<=high){
10                    int mid = (low+high)/2;
11                    if(matrix[i][mid]==target)return true;
12                    if(matrix[i][mid]>target){
13                        high=mid-1;
14                    }else{
15                        low=mid+1;
16                    }
17                }
18                return false;
19            }
20        }
21        return false;
22    }
23};