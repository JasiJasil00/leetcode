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
        while(index +1 < nums.size() && nums[index]==nums[index+1] )index++;
        recursive(nums,curr,result,index+1);
        
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        recursive(nums,{},result,0);
        return result;
    }
};