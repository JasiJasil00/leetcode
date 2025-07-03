class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> result;
        int n = nums.size();

        for (int num : nums) {
            freq[num]++;
        }

        for (auto &entry : freq) {
            if (entry.second > n / 3) {
                result.push_back(entry.first);
            }
        }

        return result;
    }
};
