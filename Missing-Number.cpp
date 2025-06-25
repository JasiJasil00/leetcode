class Solution {
public:
    int missingNumber(vector<int>& nums) {
        std:: unordered_map<int,int>hash;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            hash[nums[i]]=1;
        }
        for(int i = 0 ; i <= n ; i ++){
            if(hash[i]==0)return i;
        }
        return 0;
    }
};