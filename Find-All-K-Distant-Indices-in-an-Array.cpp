class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector <int> a;
        vector <int> b;
        for(int i = 0 ; i <= nums.size()-1 ; i++){
            if(nums[i]==key)a.push_back(i);
        }
        
        for(int i = 0 ; i < nums.size(); i++){
            for(int j = 0; j < a.size();j++){
                if(abs(i-a[j])<=k){
                    b.push_back(i);
                    break;
                }
            }
        }
        a.clear();
        return b;
    }
};