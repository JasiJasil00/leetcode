1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int n = nums.size();
5        int max = 0;
6        int count = 0;
7        for(int i = 0 ; i < n ; i++){
8            if(nums[i]==1)count++;
9            else{
10                if(max < count)max = count;
11                count = 0;
12            }
13        }
14        if(max < count)max = count;
15        return max;
16    }
17};