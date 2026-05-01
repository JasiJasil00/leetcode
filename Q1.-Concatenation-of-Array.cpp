1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4         int i = 0;
5        int max = 0;
6        for (int j = 0; j < nums.size() ; j++){
7            if(nums[j]==1){
8                i++;
9            }else{
10                if(max < i)max=i;
11                i=0;
12            }
13        }
14        if(max < i)max=i;
15        return max;
16    }
17};