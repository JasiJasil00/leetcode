class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> result;
        map <int,int> hash;
        int n = nums1.size();
        for(int i = 0 ; i < n ; i ++){
            hash[nums1[i]]=1;
        }
        n = nums2.size();
        for(int i = 0 ; i < n ; i ++){
            if(hash[nums2[i]]==1){
                result.push_back(nums2[i]);
                hash[nums2[i]]++;
            }
        }
        return result;
    }
};