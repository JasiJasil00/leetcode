1class Solution {
2public:
3    bool checkbalanced(vector<int> freq){
4        int common =0;
5        for(int i = 0 ; i < freq.size() ; i++){
6            if(freq[i]==0) continue;
7            if(common==0)common=freq[i];
8            else if(freq[i]!=common)return false;
9        }
10        return true;
11    }
12    int longestBalanced(string s) {
13       int n = s.size();
14       int maxl = 0;
15       for (int i = 0 ; i < n ; i++){
16        vector<int>freq(26,0);
17        for(int j = i ; j < n ; j++){
18
19            freq[s[j]-'a']++;
20            if(checkbalanced(freq)){
21                maxl = std::max(maxl,j-i+1);
22            }
23        }
24       }
25       return maxl;
26    }
27};