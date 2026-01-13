1class Solution {
2public:
3    int countCompleteSubarrays(vector<int>& nums) {
4       int n = nums.size();
5
6        // count unique elements in entire array
7        unordered_set<int> s(nums.begin(), nums.end());
8        int uniq = s.size();
9
10        unordered_map<int, int> freq;
11        int left = 0, right = 0;
12        int ans = 0;
13
14        while (right < n) {
15            freq[nums[right]]++;
16            right++;
17
18            // shrink window when complete
19            while (freq.size() == uniq) {
20                ans += (n - right + 1);
21
22                freq[nums[left]]--;
23                if (freq[nums[left]] == 0)
24                    freq.erase(nums[left]);
25                left++;
26            }
27        }
28        return ans;
29    }
30};