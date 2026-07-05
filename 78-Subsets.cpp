class Solution {
public:
    void recursive(vector<int> nums,vector<int> curr,vector<vector<int>> &result,int index){
        if(nums.size()==index){
            result.push_back(curr);
            return;
        }
        curr.push_back(nums[index]);
        recursive(nums,curr,result,index+1);
        curr.pop_back();
        recursive(nums,curr,result,index+1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        recursive(nums,{},result,0);
        return result;
    }
};