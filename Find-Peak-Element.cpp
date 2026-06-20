1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int n = nums.size();
5        int low = 0;
6        int high = n-1;
7        while(low<=high){
8            int mid = low + ((high-low)/2);
9            if( mid < n-1 && nums[mid]<=nums[mid+1]){
10                low=mid+1;
11            }else if(mid>=1 && nums[mid]<nums[mid-1]){
12                high= mid-1;
13            }else{
14                return mid;
15            }
16        }
17        return (nums[n-1]>nums[n-2])? nums[n-1] : nums[0];
18    }
19};