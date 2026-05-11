1class Solution {
2public:
3    vector<int> separateDigits(vector<int>& nums) {
4        vector<int>result;
5        int n = nums.size();
6        for(int i = 0 ; i < n ; i++ ){
7            int k = nums[i];
8            vector<int>inter;
9            if(k==0)inter.push_back(0);
10            while(k!=0){
11                inter.push_back(k%10);
12                k=k/10;
13            }
14            reverse(inter.begin(),inter.end());
15            result.insert(result.end(), inter.begin(), inter.end());
16        }
17        return result;
18    }
19};