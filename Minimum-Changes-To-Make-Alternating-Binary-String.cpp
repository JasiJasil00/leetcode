1class Solution {
2public:
3    int minOperations(string s) {
4       int k = 0;
5       int min = INT_MAX;
6       while(k!=s.size()){
7         char c = s[0];
8        int count =0;
9        if(c=='1'){
10                c='0';
11            }else{
12                c='1';
13            }
14        for(int i = 1 ; i < s.size() ; i++){
15            if(s[i]!=c){
16                count++;
17            }
18            if(c=='1'){
19                c='0';
20            }else{
21                c='1';
22            }
23        }
24        int l = (count > s.size()/2) ? s.size()-count : count;
25        min = std::min(l,min);
26        k++;
27       }
28       return min;
29    }
30};