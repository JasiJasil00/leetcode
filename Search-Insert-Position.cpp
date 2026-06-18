1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int left = 0;
5        int right = nums.size()-1;
6        while(left<=right){
7            int mid = left + ((right-left)/2);
8            if(nums[mid]>target){
9                right=mid-1;
10            }else if(nums[mid]<target){
11                left=mid+1;
12            }else{
13                return mid;
14            }
15        }
16        return left;
17    }
18};