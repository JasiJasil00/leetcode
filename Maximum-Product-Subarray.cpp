class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long product = 1;
        long long max = INT_MIN;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++ ){
            product*=nums[i];
            max = std::max(max,product);
            if(product==0)product=1;
        }
        product=1;
        for(int i = n-1 ; i >=0 ; i--){
            product*=nums[i];
            max = std::max(max,product);
            if(product==0)product=1;
        }
        return max;
    }
};