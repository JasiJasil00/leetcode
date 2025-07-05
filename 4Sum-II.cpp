class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n = nums1.size();
        map<int,int> hash;

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                int sum = nums1[i]+nums2[j];
                hash[sum]++;
            }
            
        }
        int count = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++ ){
                    long sum = nums3[j]+nums4[i];
                    if(hash.find(-1*sum)!=hash.end()){
                        count+=hash[-1*sum];
                    }
            }
        }
        return count;
    }
};