class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
       std::unordered_set<int> s(nums.begin(), nums.end());
        int longest = INT_MIN;
        for(int num : s){
            if(!s.count(num-1)){
                int length=1;
                int current = num;
                while(s.count(++current))length++;
                longest = std::max(longest,length);
            }
        }
        return longest;
    }
};