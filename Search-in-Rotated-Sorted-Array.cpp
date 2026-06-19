1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int left = 0;
5        int right = nums.size()-1;
6        int pos = -1;
7        while(left<=right){
8            int mid = left + ((right-left)/2);
9            if(nums[mid]==target){
10                return mid;
11            }
12            if(nums[left]<=nums[mid]){
13                if(nums[mid]>target && nums[left]<=target){
14                    right = mid-1;
15                }else{
16                    left=mid+1;
17                }
18            }else{
19                if(nums[right]>=target && nums[mid]<target){
20                    left = mid+1;
21                }else{
22                    right = mid-1;
23                }
24            }
25        }
26        return pos;
27    }
28};