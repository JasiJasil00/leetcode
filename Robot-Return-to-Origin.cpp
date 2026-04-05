1class Solution {
2public:
3    bool judgeCircle(string moves) {
4       int countvertical=0;
5       int counthorizontal = 0;
6       for(int i = 0 ; i < moves.size() ; i++){
7        if(moves[i]=='U')countvertical++;
8        if(moves[i]=='L')counthorizontal++;
9        if(moves[i]=='D')countvertical--;
10        if(moves[i]=='R')counthorizontal--;
11       } 
12       return countvertical==0 && counthorizontal==0;
13    }
14};