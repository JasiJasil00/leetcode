/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int * a=(int *)malloc(sizeof(int)*2);
    *returnSize=2;
    int flag = 0;
    int flag1 = 1;
    for(int i = 0 ; i < numsSize ; i++){
        if( nums[i] == target ){
            if(flag == 0){
                a[0]=i;
                a[1]=i;
                flag = 1;
            }else{
                a[1]=i;
            }
            flag1=0;
        }
    }
    if(flag1==1){
        a[0]=-1;
        a[1]=-1;
    }
    return a;
}