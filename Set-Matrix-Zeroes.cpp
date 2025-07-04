class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        if(row==0)return;
        int col = matrix[0].size();
        // vector <int> r(row,0);
        // vector <int> c(col,0);
        int col0=1;
        for(int i = 0 ; i < row ; i ++){
            for(int j = 0 ; j < col ; j++ ){
                if(matrix[i][j]==0){
                matrix[i][0]=0;
                if(j!=0)
                matrix[0][j]=0;
                else
                    col0=0;
                }
            }
        }
        for(int i = 1 ; i < row ; i ++){
            for(int j = 1 ; j < col ; j++ ){
                if( matrix[i][0]==0 || matrix[0][j]==0){
                   matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0){
            for(int j =0 ; j < col ; j++){
                matrix[0][j]=0;
            }
        }
        if(col0 == 0){
            for(int i =0 ; i < row ; i++)matrix[i][0]=0;
        }
    }
};