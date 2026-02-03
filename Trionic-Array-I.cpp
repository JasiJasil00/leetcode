1class Solution {
2public:
3    bool isTrionic(vector<int>& nums) {
4        int q = 1;
5        int n = nums.size();
6        bool statement;
7        int index = 0;
8        for(int i = 0 ; i < n-1 ; i++){
9            if(q%2==1){
10                statement = nums[i] < nums[i+1];
11            }else{
12                statement = nums[i] > nums[i+1];
13            }
14            if(!statement && i!=index){
15                q++;
16                index = i;
17                i--;
18            }
19            else if(!statement)return false;
20            if( q > 3)return false;
21        }
22        if(q < 3)return false;
23        return true;
24    }
25};