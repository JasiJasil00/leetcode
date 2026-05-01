1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4        map<int,int>hash;
5        vector<int>a;
6        int m=-1;
7        sort(nums.begin(),nums.end());
8        for(int i = 0 ; i < nums.size() ; i++){
9            if(hash[nums[i]]==1){
10                
11                a.push_back(nums[i]);
12            }else{ hash[nums[i]]++;}
13            if(i!=0&&hash[i]!=1)m = i;
14        }
15        if(m==-1)m=nums.size();
16        a.push_back(m);
17        return a;
18    }
19};