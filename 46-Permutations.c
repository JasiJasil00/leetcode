/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

void swap(int * a, int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}

void addpermute(int * nums, int numsSize, int *returnSize , int **result){
    result[*returnSize]=(int *)malloc(sizeof(int)*numsSize);
    for(int i = 0 ; i < numsSize ; i ++){
        result[*returnSize][i]=nums[i];
    }
    (*returnSize)++;
}

void backtrack(int * nums , int numsSize, int start , int * returnSize , int ** result){
    if(start ==  numsSize){
        addpermute(nums,numsSize,returnSize,result);
        return;
    }

    for(int i = start ; i < numsSize ; i ++){
        swap(&nums[start],&nums[i]);
        backtrack(nums,numsSize,start+1,returnSize,result);
        swap(&nums[start],&nums[i]);
    }
}

int** permute(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int maxpermute=1;
    for(int i = 2 ; i < numsSize+1 ; i ++){
        maxpermute*=i;
    }
    int ** result = ( int ** )malloc(sizeof(int*)*maxpermute);
    *returnColumnSizes = (int *)malloc(sizeof(int)*maxpermute);
    *returnSize=0;

    backtrack(nums,numsSize,0,returnSize,result);

    for(int i = 0 ; i < *returnSize ; i ++){
        (*returnColumnSizes)[i]=numsSize;
    }

    return result;
}