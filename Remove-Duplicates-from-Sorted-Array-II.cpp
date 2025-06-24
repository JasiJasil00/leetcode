class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2) return nums.size();
        int left =0;
        int right =1;
        while(right!=nums.size()){
            if(nums[left]!=nums[right]){
                if(right-1-2 >= left){
                    nums.erase(nums.begin()+left,nums.begin()+right-2);
                    right = left+ 2;
                }
                left=right;
            }
            right++;
        }
        if(right-1-1 > left){
                    nums.erase(nums.begin()+left,nums.begin()+right-2);
        }
        return nums.size();
    }
};