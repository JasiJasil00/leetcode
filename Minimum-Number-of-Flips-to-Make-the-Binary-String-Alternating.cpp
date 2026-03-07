1class Solution {
2public:
3    int minFlips(string s) {
4        string p =s+s;
5        int count0 = 0;
6        int count1 = 0;
7        string alt1 = "";
8        string alt2 = "";
9        for(int i = 0 ; i < p.size() ; i++){
10            alt1 += (i%2==0) ? '1': '0';
11            alt2 += (i%2==1) ? '1': '0';
12        }
13        int min =INT_MAX;
14        for(int i = 0 ; i < s.size() ; i++){
15            if(p[i]!=alt1[i])count0++;
16            if(p[i]!=alt2[i])count1++;
17        }
18        min = std::min(count0,count1);
19        for(int i = s.size() ; i < p.size() ; i++){
20            if(p[i]!=alt1[i])count0++;
21            if(p[i]!=alt2[i])count1++;
22            if(p[i-s.size()]!=alt1[i-s.size()])count0--;
23             if(p[i-s.size()]!=alt2[i-s.size()])count1--;
24             min = std::min(min,std::min(count0,count1));
25        }
26        return min;
27    } 
28};