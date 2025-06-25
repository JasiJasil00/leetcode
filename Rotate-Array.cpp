class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        vector <int> a(nums.end()-k,nums.end());
        for (int i = n - 1; i >= k; --i) {
            nums[i] = nums[i - k];
        }
        int v = 0;
        for(int p : a){
            nums[v++]=p;
        }
    }
};