class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
    if(row == 0 )return {};
        int col = matrix[0].size();
        vector<int> nums;
        int i;
        int j;
        int imin=0;
        int jmin=0;
        int imax=row-1;
        int jmax=col-1;
        int count = 0;
        while(count < row*col){
             i = imin;
            j = jmin;   
            while(j<=jmax && count < row*col){
                nums.push_back(matrix[i][j]);
                count++;
                j++;
            }
            jmax--;
            j--;
            i++;
            while(i<=imax  && count < row*col){
                nums.push_back(matrix[i][j]);
                count++;
                i++;
            }
            imax--;
            i--;
            j--;
            while(j>=jmin && count < row*col){
                nums.push_back(matrix[i][j]);
                count++;
                j--;
            }
            j++;
            imin++;
            i--;
            while(i>=imin && count < row*col){
                 nums.push_back(matrix[i][j]);
                count++;
                i--;
            }
            jmin++;   
        }
        return nums;
    }
};