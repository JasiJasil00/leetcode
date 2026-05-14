1class Solution {
2public:
3    bool check(vector<int>& nums) {
4        int i ;
5        for(i = 1 ; i < nums.size(); i++){
6            if(nums[i-1]>nums[i])break;
7        }
8        if(i==nums.size())return true;
9        int n = nums.size();
10        for(int k = 0 ; k < n-1 ; k++ ){
11            if(nums[(i+k)%n]>nums[(i+k+1)%n])return false;
12        }
13        return true;
14    }
15};