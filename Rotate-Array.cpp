1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        vector<int>temp;
5        int n = nums.size();
6        k=k%n;
7        for(int i = n - k ; i < n ; i ++){
8            temp.push_back(nums[i]);
9        }
10        for(int i = n - 1; i >= k; i--) {
11            nums[i] = nums[i - k];
12        }
13        for(int i = 0 ; i < k ; i++){
14            nums[i]=temp[i];
15        }
16
17    }
18};