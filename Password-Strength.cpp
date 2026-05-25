1class Solution {
2public:
3    int value(char s){
4        if(s <= 'z' && s >= 'a'){
5            return 1;
6        }else if(s >= 'A' && s <= 'Z'){
7            return 2;
8        }else if( s >= '0' && s <= '9'){
9            return 3;
10        }else if( s== '!' || s =='@' || s == '#' || s == '$' ){
11            return 5;
12        }
13        return 0;
14    }
15    int passwordStrength(string password) {
16         map<char,int>hash;
17         int sum =0;
18         for(auto s : password){
19            int m = value(s);
20            if(hash.find(s)==hash.end()){
21                hash[s]=1;
22                sum+=m;
23            }
24         }
25         return sum;
26    }
27};