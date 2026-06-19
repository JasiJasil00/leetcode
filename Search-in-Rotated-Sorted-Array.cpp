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
19                if(nums[right]<target){
20                    right=mid-1;
21                }else if(nums[mid]>target){
22                    right=mid-1;
23                }else{
24                    left = mid+1;
25                }
26            }
27        }
28        return pos;
29    }
30};