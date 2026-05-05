1class Solution {
2public:
3    vector<int> nextGreaterElements(vector<int>& nums) {
4        int n = nums.size();
5        int temp = nums[n-1]; 
6        vector<int> a = nums;
7        a.insert(a.end(),nums.begin(),nums.end());
8        vector<int> result(2*n,-1);
9        stack <int> h ;
10        for(int i = 2*n-1 ; i >= 0 ; i--){
11            while(!h.empty() && h.top() <= a[i]){
12                h.pop();
13            }
14            result[i]=(h.empty())?-1:h.top();
15            h.push(a[i]);
16        }
17        result.erase(result.begin()+n,result.end());
18        return result;
19    }
20};