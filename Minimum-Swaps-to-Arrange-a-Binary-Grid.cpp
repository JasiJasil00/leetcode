1class Solution {
2public:
3    int minSwaps(vector<vector<int>>& grid) {
4        vector<int> zcount(grid.size(),0);
5        int ans = 0;
6        for(int i = 0 ; i < grid.size() ; i++){
7            for(int j = grid[i].size()-1 ; j >=0 ; j--){
8                if(grid[i][j]==0)zcount[i]++;
9                else break;
10            }
11        }
12        int n = grid.size();
13        for(int i = 0 ; i < zcount.size() ; i++ ){
14            int target = n-i-1;
15            int k = i;
16            while( k < n && zcount[k]< target){
17                k++;
18            }
19            if(k==n)return -1;
20            ans+=(k-i);
21           while(k > i){
22             int temp = zcount[k];
23            zcount[k]=zcount[k-1];
24            zcount[k-1]=temp;
25            k--;
26           }
27        }
28        return ans;
29    }
30};