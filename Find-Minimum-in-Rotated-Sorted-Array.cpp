1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int min = 0;
5        int left = 0;
6        int right = nums.size()-1;
7        while(left <= right){
8            int mid = left + ((right-left)/2);
9            if(nums[mid]>nums[right]){
10                left = mid+1;
11            }else{
12                right = mid-1;
13                if(nums[min]>nums[mid])min = mid;
14            }
15        }
16        return nums[min];
17    }
18};