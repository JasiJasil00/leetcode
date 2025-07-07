class Solution {
public:
    bool isPowerOfTwo(int n) {
        int sum = 0;
         if(n==INT_MIN)return false;
        while(sum < 32){
            int p = 1<<sum;
            if(n == p )return true;
            sum++;
        }
        return false;
    }
};