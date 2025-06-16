class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min = INT_MAX;
        int diff = 0;
        for ( int num : nums){
            if(min > num ){
                min = num;
            }else if(num - min > diff){
                diff = num - min;
            }
            if(num == min && diff==0){
                diff = -1;
            }
        }
        return diff;
    }
};