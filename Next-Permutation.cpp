1class Solution {
2public:
3    void nextPermutation(vector<int>& nums) {
4        int n = nums.size();
5        int i;
6        for( i = n-2 ; i >=0 ; i--){
7            if(nums[i]<nums[i+1])break;
8        }
9        if(i==-1){
10            reverse(nums.begin(),nums.end());
11            return;
12        }
13        int index = i;
14        for (int i = nums.size() - 1; i > index; i--) {
15            // Swap the two
16            if (nums[i] > nums[index]) {
17                swap(nums[i], nums[index]);
18                break;
19            }
20        }
21        reverse(nums.begin()+index+1,nums.end());
22    }
23};