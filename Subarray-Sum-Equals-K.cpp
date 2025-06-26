class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {      unordered_map<int,int>prefix;
        prefix[0]=1;
        int sum = 0;
        int count =0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum+= nums[i];
            int r = sum - k;
            count += prefix[r];
            prefix[sum]++;
        }
        return count;
    }
};