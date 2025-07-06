class FindSumPairs {
public:
    vector<int> nums3;
    vector<int> nums4;
    unordered_map<int, int> freq;  // freq of nums4

    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        nums3 = nums1;
        nums4 = nums2;
        for (int num : nums4) {
            freq[num]++;
        }
    }

    void add(int index, int val) {
        // Update freq map before and after modification
        freq[nums4[index]]--;
        nums4[index] += val;
        freq[nums4[index]]++;
    }

    int count(int tot) {
        int result = 0;
        for (int num : nums3) {
            int complement = tot - num;
            if (freq.find(complement) != freq.end()) {
                result += freq[complement];
            }
        }
        return result;
    }
};
