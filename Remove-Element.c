int removeElement(int* nums, int numsSize, int val) {
    int j=0;
    int jsize=0;
    int k =0;
    for (int i=0; i < numsSize ; i++ ){
        if(nums[i]==val){
            j++;
        }else{
            nums[k]=nums[i];
            k++;
        }
            
    }
    return k;
    
}