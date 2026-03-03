1class Solution {
2public:
3    string invert(string s){
4        int i =0;
5        while(i!=s.size()){
6            if(s[i]=='1')s[i]='0';
7            else s[i]='1';
8            i++;
9        }
10        std::reverse(s.begin(),s.end());
11        return s;
12    }
13    char findKthBit(int n, int k) {
14        string s = "0";
15        while(s.size()<k){
16            string temp="";
17            temp+=s;
18            temp+="1";
19            temp+=invert(s);
20            s=temp;
21        }
22        return s[k-1];
23    }
24};