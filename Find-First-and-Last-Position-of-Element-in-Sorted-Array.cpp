1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4        vector<int> result = {-1,-1};
5        int left = 0 ;
6        int right = nums.size()-1;
7        while(left<=right){
8            int mid = left +((right-left)/2);
9            if(nums[mid]>target){
10                right = mid-1;;
11            }else if(nums[mid]<target){
12                left = mid+1;
13            }else{
14                right = mid-1;
15                result[0]=mid;
16            }
17        }
18         left = 0 ;
19         right = nums.size()-1;
20        while(left<=right){
21            int mid = left +((right-left)/2);
22            if(nums[mid]>target){
23                right = mid-1;;
24            }else if(nums[mid]<target){
25                left = mid+1;
26            }else{
27                left = mid+1;
28                result[1]=mid;
29            }
30        }
31        return result;
32    }
33};