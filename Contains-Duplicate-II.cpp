class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int,int> hash;
        int n = nums.size();
        for(int i = 0 ;  i < n ; i ++){
            if(hash.find(nums[i])!=hash.end()){
                int place = hash[nums[i]];
                if(i - place <= k )return true;
                hash[nums[i]]=i;
                continue;
            }
            hash[nums[i]]=i;
        } 
        return false;
    }
};