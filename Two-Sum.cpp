1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        int n = nums.size();
5        vector<pair<int,int>> hash;
6        for(int i = 0 ; i < n ; i++){
7            hash.push_back({nums[i],i});
8        }
9        sort(hash.begin(),hash.end());
10        int left =0;
11        int right = n-1;
12        while(left < right){
13            int sum = hash[left].first + hash[right].first;
14            if(sum > target){
15                right--;
16            }else if(sum < target){
17                left++;
18            }else{
19                return {hash[left].second,hash[right].second};
20            }
21        }
22        return {-1,-1};
23    }
24};