1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        int n = nums.size();
5        map <int,int> hash;
6        for(int i = 0 ; i < n ; i++){
7            int sub = target - nums[i];
8            if(hash.find(sub)!=hash.end()){
9                return{hash[sub],i};
10            }
11            hash[nums[i]]=i;
12        }
13        return {-1,-1};
14    }
15};