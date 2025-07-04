class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> result;
        int n = nums.size();

        for (int num : nums) {
            freq[num]++;
            if(freq[num] > n/3 && (result.size()==0 || result[0]!=num))result.push_back(num);
            if(result.size()==2)break;
        }

        return result;
    }
};
