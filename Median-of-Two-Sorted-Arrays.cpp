class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int n = nums2.size();
        int j = 0;
        while(i < nums1.size() && j < n){
            if(nums1[i]>nums2[j]){
                nums1.insert(nums1.begin()+i,nums2[j]);
                j++;
            }else{
                i++;
            }
        }
        while(j<n){
            nums1.push_back(nums2[j]);
            j++;
        }
        int m = nums1.size();
       return (m % 2 == 0)
    ? (double)(nums1[m/2 - 1] + nums1[m/2]) / 2
    : nums1[m/2];
    }
};