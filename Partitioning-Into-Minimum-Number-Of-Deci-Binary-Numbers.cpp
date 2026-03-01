1class Solution {
2public:
3    int minPartitions(string n) {
4        int min = 0;
5        for(int i = 0 ; i < n.size()  ; i++){
6            if((n[i]-'0')>min)min=n[i]-'0';
7        }
8        return min;
9    }
10};