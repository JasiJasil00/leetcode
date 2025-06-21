class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        int right = k-1;
        int n= nums.size();
        int sum = 0;
        int max_sum=INT_MIN;
        for(int i = left;i<=right;i++){
            sum+=nums[i];
        }
        if(max_sum<sum)max_sum=sum;
        while(right<n-1){
            sum-=nums[left++];
            sum+=nums[++right];
            if(max_sum<sum)max_sum=sum;
        }
        return (double)max_sum/k;
    }
};