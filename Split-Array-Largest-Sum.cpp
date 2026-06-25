1class Solution {
2public:
3    bool possible(vector<int>& nums, int k , int s){
4        int count = 0;
5        int sum = 0;
6        for(int n : nums){
7            if(sum+n <= s){
8                sum+=n;
9            }else{
10                sum = n;
11                count++;
12            }
13            if(count>=k)return true;
14        }
15        return count>=k;
16    }
17    int splitArray(vector<int>& nums, int k) {
18        int low = nums[0];
19        int high = 0;
20        for(int n : nums){
21            if(n>low)low=n;
22            high+=n;
23        }
24        while(low<=high){
25            int mid = low + ((high-low)/2);
26            if(possible(nums,k,mid)){
27                low=mid+1;
28            }else{
29                high = mid-1;
30            }
31        }
32        return low;
33    }
34};