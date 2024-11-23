

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
char** rotateTheBox(char** box, int boxSize, int* boxColSize, int* returnSize, int** returnColumnSizes){
    int count = 0;
    char **stack = (char **)malloc(sizeof(char*)*boxColSize[0]);
    for(int i = 0 ; i < boxColSize[0] ; i ++){
        stack[i]=(char *)malloc(sizeof(char)*boxSize);
    }
    for(int i = 0 ; i < boxSize ; i ++){
        count=0;
        for(int j = 0 ; j < boxColSize[i] ; j ++){
            if(box[i][j]=='#'){
                count++;
                stack[j][boxSize-i-1]='.';
            }
            if(box[i][j]=='*'){
                stack[j][boxSize-i-1]='*';
                for(int k = count ; k > 0 ; k--){
                    stack[j-k][boxSize-i-1]='#';
                }
                count=0;
            }
            if(box[i][j]=='.'){
                stack[j][boxSize-i-1]='.';
            }
        }
        if(count != 0){
                for(int k = count ; k > 0 ; k--){
                    stack[boxColSize[0]-k][boxSize-i-1]='#';
                }
                count =0;
        }
    }
    *returnSize=boxColSize[0];
    *returnColumnSizes=(int *)malloc(sizeof(int)*boxColSize[0]);
    for(int i = 0 ; i < boxColSize[0] ; i ++){
       ( *returnColumnSizes)[i]=boxSize;
    }
    return stack;
}