1class Solution {
2public:
3    int binaryGap(int n) {
4        int flag = 0;
5        int maxGap = 0;
6        int count = 0;
7    int res = 0;
8        while(n != 0){
9            if(n % 2 == 1){
10                if(flag == 1){
11                    maxGap = std::max(maxGap, count);
12                    res =1;
13                }
14                flag = 1;
15                count = 0;
16            }
17            else{
18                if(flag == 1)
19                    count++;
20            }
21            n = n / 2;   // <-- MUST update n every iteration
22        }
23
24        return (res==0)? 0 : maxGap+1;
25    }
26};