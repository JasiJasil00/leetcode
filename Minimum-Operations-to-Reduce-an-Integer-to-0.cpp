class Solution {
public:
    int minOperations(int n) {
       if(n == 0 || n ==1)return n;

       int val = 1;
       while(val*2 < n){
         val*=2;
       }
       
       return 1 + min(minOperations(val*2-n),minOperations(n-val));
    }
};