1class Solution {
2public:
3    bool checkInclusion(string s1, string s2) {
4       vector<int> freq1(26,0);
5       vector<int> freq2(26,0);
6       if(s1.size()>s2.size())return false;
7        int n = s1.size();
8        int m = s2.size();
9        int low =0;
10        for(int i = 0 ; i < n ; i++){
11            freq1[s1[i]-'a']++;
12        }
13        for(int i = 0 ; i < n ; i++){
14            freq2[s2[i]-'a']++;
15        }
16        if(freq1==freq2)return true;
17        for(int i = n ; i < m ; i++ ){
18            freq2[s2[low]-'a']--;
19            freq2[s2[i]-'a']++;
20            low++;
21            if(freq1==freq2)return true;
22        }
23        return false;
24    }
25};