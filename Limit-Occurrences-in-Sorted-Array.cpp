1class Solution {
2public:
3    vector<int> limitOccurrences(vector<int>& nums, int k) {
4        int select = nums[0];
5        int count = 0;
6
7        for(int i = 0; i < nums.size(); i++) {
8
9            if(nums[i] == select) {
10                count++;
11            } else {
12                select = nums[i];
13                count = 1;
14            }
15
16            while(i < nums.size() && nums[i] == select && count > k) {
17                nums.erase(nums.begin() + i);
18                count--;
19                i--;
20            }
21        }
22
23        return nums;
24    }
25};