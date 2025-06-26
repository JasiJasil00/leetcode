class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count(3,0);
        int i;
        for(i = 0 ; i < nums.size(); i ++){
            count[nums[i]]++;
        }
        i = 0;
        for(int j = 0; j < 3 ; j ++){
            while(count[j]>0){
                nums[i++]=j;
                count[j]--;
            }
        }
    }
};