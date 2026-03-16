1class Solution {
2public:
3    string kthDistinct(vector<string>& arr, int k) {
4       map<string,int> freq;
5
6        for(auto &s : arr){
7            freq[s]++;
8        }
9
10        int count = 0;
11
12        for(auto &s : arr){
13            if(freq[s] == 1){
14                count++;
15                if(count == k) return s;
16            }
17        }
18
19        return "";
20    }
21};