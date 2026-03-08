1class Solution {
2public:
3    string findDifferentBinaryString(vector<string>& nums) {
4        int n = nums.size();
5        string compare = "";
6        sort(nums.begin(),nums.end());
7        for(int i = 0; i < n ; i++){
8            compare+='0';
9        }
10        for(int i = 0 ; i < n ; i++){
11            if(nums[i]!=compare)return compare;
12            int j = compare.size()-1;
13            while(j>=0){
14                if(compare[j]=='1'){
15                    compare[j]='0';
16                }else{
17                    compare[j]='1';
18                    break;
19                }
20                j--;
21            }
22        }
23        return compare;
24    }
25};