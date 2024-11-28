int maximumUniqueSubarray(int* nums, int numsSize) {
    int * a = ( int * )calloc(10001,sizeof(int));
    int sum = 0;
    int max = 0;
    int maxsum = 0;
    int start = 0;
    for(int i = 0 ; i < numsSize ; i ++){
        if( a[nums[i]] > start ){
            for(int j = start ; j < a[nums[i]] ; j ++ ){
                sum-=nums[j];
            }
            start = a[nums[i]];
        }
        sum+=nums[i];
        if(maxsum<sum){
            maxsum=sum;
        }
        a[nums[i]]=i+1;
    }

    return maxsum;
}