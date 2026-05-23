1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int n = nums.size();
5        int low = 0;
6        int mid = 0;
7        int high = n-1;
8        while(mid <= high){
9            if(nums[mid]==0){
10                swap(nums[low],nums[mid]);
11                mid++;
12                low++;
13            }
14            else if(nums[mid]==1)mid++;
15            else if(nums[mid]==2){
16                swap(nums[mid],nums[high]);
17                high--;
18            }
19        }
20    }
21};