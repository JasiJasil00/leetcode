class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product1=1;
        int product2=1;
        int count=0;
        int j = -1;
        int n = nums.size();
        vector <int> result(n,0);
        for(int i = 0 ; i < n ; i ++){
            if(nums[i]==0){
                count++;
                j=i;
                continue;
                }
            product2 *= nums[i];
        }
        if(count>=2){
            return result;
        }else if(count==1){
            for(int i = 0 ; i < j ; i ++){
                product1*=nums[i];
            }
            for(int i = j+1; i<n ; i++){
                product1*=nums[i];
            }
            result[j]=product1;
            return result;
        }

        for(int i = 0 ; i < n ; i ++){
            product2/=nums[i];
            if(i>0)product1*=nums[i-1];
            result[i]=product1*product2;
           
        }
        return result;
    }
};