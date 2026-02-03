1class Solution {
2public:
3    bool isTrionic(vector<int>& nums) {
4        int n = nums.size();
5        if(n < 4)return false;
6        int i = 0;
7        while(i+1 < n && nums[i] < nums[i+1])i++;
8        if(i==0) return false;
9
10        int decstart = i;
11        while(i+1 < n && nums[i] > nums[i+1])i++;
12        if(i==decstart)return false;
13
14        int start = i;
15        while(i+1 < n && nums[i] < nums[i+1])i++;
16        if(i==start)return false;
17
18        return i==n-1;
19    }
20};