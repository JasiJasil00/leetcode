class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        std::unordered_map<int,int> hash;
        int max = 0;
        for(int num : nums){
            hash[num]++;
            if(hash[num]>max)max=hash[num];
        }
        int sum = 0;
        for(int num:nums){
        if(hash[num]==max)sum+=1;
        }
        return sum;
    }
};