1class Solution {
2public:
3    string dfs(string curr, int n , int k ,int& count){
4        if(curr.size()==n){
5            count++;
6            if(count==k)return curr;
7            return "";
8        }
9        for(auto c : {'a', 'b', 'c'})
10        {
11            if(curr == "" or c != curr.back())
12            {
13                string res = dfs(curr+c, n, k, count);
14                if(!res.empty()) return res;
15            }
16        }
17        return "";
18    }
19    string getHappyString(int n, int k) {
20        int count = 0;
21        return dfs("",n,k,count); 
22        
23    }
24};