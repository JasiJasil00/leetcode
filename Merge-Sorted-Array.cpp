class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        nums1.resize(m); 
        while(i!=nums1.size() && j !=n){
            if(nums1[i]>nums2[j]){
                nums1.insert(nums1.begin()+i,nums2[j]);
                j++;
            }else{
                i++;
            }
        }
        if(j!=n)nums1.insert(nums1.begin()+m+j,nums2.begin()+j,nums2.end());
    }
};