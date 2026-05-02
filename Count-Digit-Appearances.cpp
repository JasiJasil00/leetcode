1class Solution {
2public:
3    int countDigitOccurrences(vector<int>& nums, int digit) {
4        int count =0;
5        for(int i = 0 ; i < nums.size() ; i++){
6            int n = nums[i];
7            while(n!=0){
8                int m=n%10;
9                if(m==digit)count++;
10                n=n/10;
11            }
12        }
13        return count;
14    }
15};