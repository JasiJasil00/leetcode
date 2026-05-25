1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) {
4        int n = nums.size();
5        vector<int>ans(n,0);
6        int neg = 1;
7        int pos = 0;
8        for(int i = 0 ; i < n ; i ++){
9            if(nums[i] < 0){
10                ans[neg]=nums[i];
11                neg+=2;
12                
13            }else{
14                ans[pos]=nums[i];
15                pos+=2;
16            }
17        }
18        return ans;
19        
20    }
21};