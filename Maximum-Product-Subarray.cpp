class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long product;
        long long max = INT_MIN;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++ ){
            product=nums[i];
            max=std::max(product,max);
            for(int j = i+1 ; j < n ; j++){
                product*=nums[j];
                max=std::max(product,max);
            }
        }
        return max;
    }
};