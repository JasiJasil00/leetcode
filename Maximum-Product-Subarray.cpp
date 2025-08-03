class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = INT_MIN;
        int prefsum = 1;
        int suffsum =1;
        for( int i = 0 ; i  < nums.size() ; i++){
            prefsum*=nums[i];
            suffsum*=nums[nums.size()-1-i];
            max = std::max(max,suffsum);
            max=std::max(max,prefsum);
            if(prefsum==0)prefsum=1;
            if(suffsum==0)suffsum=1;
        }
        return max;
    }
};