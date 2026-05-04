1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        vector<int> result;
5        map<int,int> next_greatest;
6        stack <int> s;
7        for(int i = nums2.size()-1 ; i >= 0 ; i --){
8            while(!s.empty() && s.top() <= nums2[i]){
9                s.pop();
10            }
11            next_greatest[nums2[i]]=(s.empty()) ? -1 : s.top();
12            s.push(nums2[i]);
13        }
14
15        for(int i = 0 ; i < nums1.size() ; i++){
16            result.push_back(next_greatest[nums1[i]]);
17        }
18        return result;
19    }
20};