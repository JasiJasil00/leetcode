class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>result;
        int n = nums.size();
        for(int a = 0 ; a < n ; a++){
            if(a>0 && nums[a]==nums[a-1])continue;
            for(int b = a+1 ; b < n ; b++){
                if(b>a+1 && nums[b]==nums[b-1])continue;
                int c=b+1;
                int d=n-1;
                while(c<d){
                    long sum = nums[a]+nums[b];
                    sum+=nums[c];
                    sum+=nums[d];
                    if(sum < target){
                        c++;
                    }else if(sum > target){
                        d--;
                    }else{
                        result.push_back({nums[a],nums[b],nums[c],nums[d]});
                        c++;
                        d--;
                        while(c<d && nums[c]==nums[c-1])c++;
                        while(c<d && nums[d]==nums[d+1])d--;
                    }
                }
            }
        }
        return result;
    }
};