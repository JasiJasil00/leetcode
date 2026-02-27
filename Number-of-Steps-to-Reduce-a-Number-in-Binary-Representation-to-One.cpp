1class Solution {
2public:
3    int numSteps(string s) {
4        int count = 0;
5        int carry = 0;
6        for(int i = s.size()-1 ; i >0; i--){
7            if((s[i]-'0'+carry)%2==0){
8                count++;
9            }else{
10                count+=2;
11                carry=1;
12        }
13        }
14        return count+carry;
15    }
16};