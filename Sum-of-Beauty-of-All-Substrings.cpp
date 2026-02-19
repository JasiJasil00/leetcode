1class Solution {
2public:
3    int beauty(vector <int> & hash){
4        int mf = -1;
5        int lf = 1e9;
6        for(int i = 0 ; i < hash.size() ; i++){
7            mf=std::max(mf,hash[i]);
8            if(hash[i]>=1){
9                lf=min(lf,hash[i]);
10            }
11        }
12        return mf-lf;
13    }
14    int beautySum(string s) {
15        int res =0;
16        for(int i = 0 ; i < s.size() ; i++){
17            vector<int>hash(26,0);
18            for(int j = i ; j < s.size() ; j++ ){
19               hash[s[j]-'a']++;
20               res=res+beauty(hash);
21            }
22        }
23        return res;
24    }
25};