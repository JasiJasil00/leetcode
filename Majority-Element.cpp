1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4       int n = nums.size();
5       int count = 0;
6        int element = -1;
7        for(int i = 0 ; i < n ; i++){
8            if( count == 0 ){
9                element = nums[i];
10                count ++;
11            }else if ( element == nums[i] ){
12                count++;
13            }else{
14                count--;
15            }
16        }
17        return element;
18    }
19};