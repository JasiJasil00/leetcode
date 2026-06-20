1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4       int low  = 0 ;
5       int n = nums.size();
6       int high = n-1;
7       while(low <= high){
8        int mid = low + ((high-low)/2);
9            if(mid%2==0){
10                if(mid>=1 && nums[mid]==nums[mid-1]){
11                    high=mid-1;
12                }else if(mid<n-1 && nums[mid]==nums[mid+1]){
13                    low=mid+1;
14                }else{
15                    return nums[mid];
16                }
17            }else{
18                if(mid>=1 && nums[mid]==nums[mid-1]){
19                    low=mid+1;
20                }else if(mid<n-1 && nums[mid]==nums[mid+1]){
21                    high=mid-1;
22                }else{
23                    return nums[mid];
24                }
25            }
26       }
27       return -1; 
28    }
29};