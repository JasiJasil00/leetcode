1class Solution {
2public:
3    int maxRotateFunction(vector<int>& nums) {
4        int n= nums.size();
5        long long sum = 0;
6        long long f = 0;
7        for(int i = 0 ; i < n ; i++){
8            sum+=nums[i];
9            f+=(i*nums[i]);
10        }
11        long long max = f;
12        for(int i = 1 ; i < n ; i++){
13            f= f + sum - n*nums[n-i];
14            max = std::max(f,max);
15        }
16        return max;
17    }
18};